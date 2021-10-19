#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/mutex.h>
#include <linux/kernel.h>

#define PROCESS_NAME "partb_1_18cs10002"

MODULE_LICENSE("GPL");
//MODLUE_AUTHOR("iakshat");

//mutex to limit single process access to hashtable
static DEFINE_MUTEX(hashtable_mutex);

//node for hashtable
struct hashnode {
    pid_t key;
    int size;
    int entry_count;
    struct list_head elem;
    struct list_head dequeue;
};

//node for each dequeue element
struct dequenode {
    int value;
    struct list_head elem;
};

//hashtable head node
struct list_head *hashhead = NULL;

//get hashtable entry for pid
struct hashnode *get_key(pid_t pid) {

    if(!hashhead){
        printk(KERN_ERR ": hashhead not initialized properly\n");
        return NULL;
    }

    //scroll through hashtable and return node for pid
    struct hashnode *itr;
    list_for_each_entry(itr, hashhead, elem) {
        if(itr->key == pid)
            return itr;
    };
    return NULL;

}

//push to front of dequeue
void push_front_dq(int value, struct list_head *dq) {

    struct dequenode* new_node = kmalloc(sizeof(struct dequenode), GFP_KERNEL);
    new_node->value = value;
    INIT_LIST_HEAD(&new_node->elem);
    list_add(&new_node->elem, dq);

}

//push to back of dequeue
void push_back_dq(int value, struct list_head *dq) {

    struct dequenode* new_node = kmalloc(sizeof(struct dequenode), GFP_KERNEL);
    new_node->value = value;
    INIT_LIST_HEAD(&new_node->elem);
    list_add_tail(&new_node->elem, dq);

}

//free all dequeue nodes
void free_node_dequeue(struct hashnode *node){

    //iterate with safe pointer and free each node
    struct dequenode *itr, *temp;
    list_for_each_entry_safe(itr, temp, &node->dequeue, elem) {
        list_del(&itr->elem);
        kfree(itr);
    }

}

//callback for opening proc file
static int callback_open(struct inode *inodep, struct file *filep) {

    if(!hashhead){
        printk(KERN_ERR ": hashhead not initialized properly\n");
        return -EACCES;
    }

    //throw error if file already open
    struct hashnode *itr;
    list_for_each_entry(itr, hashhead, elem) {
        if(itr->key == current->pid){
            printk(KERN_ERR, ": file already opened by pid %d\n", current->pid);
            return -EACCES;
        }
    }

    //create a new hashtable entry
    struct hashnode *new_node = kmalloc(sizeof(struct hashnode), GFP_KERNEL);
    new_node->key = current->pid;
    new_node->size = -1;
    new_node->entry_count = 0;
    INIT_LIST_HEAD(&new_node->dequeue);
    INIT_LIST_HEAD(&new_node->elem);

    //insert into hashtable
    mutex_lock(&hashtable_mutex);
    list_add_tail(&new_node->elem, hashhead);
    mutex_unlock(&hashtable_mutex);

    printk(KERN_INFO ": PID %d successfully opened\n", current->pid);

    return 0;

}

//callback for releasing/closing proc file
static int callback_release(struct inode *inodep, struct file *filep) {

    if(!hashhead){
        printk(KERN_ERR ": hashhead not initialized properly\n");
        return -EACCES;
    }

    //iterate through hashtable and delete corresponding entry
    struct hashnode *itr, *temp;
    list_for_each_entry_safe(itr, temp, hashhead, elem) {
        if(itr->key == current->pid){

            free_node_dequeue(itr);

            mutex_lock(&hashtable_mutex);
            list_del(&itr->elem);
            mutex_unlock(&hashtable_mutex);

            kfree(itr);

        }
    }

    printk(KERN_ALERT ": PID %d closed\n", current->pid);
    return 0;

}

//callback for reading from proc file
static ssize_t callback_read(struct file *file, char* buf, size_t count, loff_t* pos) {

	if(buf==NULL || count<=0)
		return -EINVAL;

    //check for initialization errors
    struct hashnode *node = get_key(current->pid);
    if(!node){
        printk(KERN_ERR ": No key entry in hashtable for PID: %d\n", current->pid);
        return -1;
    }

    if(node->size == -1){
        printk(KERN_ERR ": PID: %d tried to read without setting dequeue size\n", current->pid);
        return -1;
    }

    if(!(node->dequeue).next){
        printk(KERN_ERR ": Dequeue not initialized properly in hashtable for PID: %d\n", current->pid);
        return -1;
    }

    if(list_empty(&node->dequeue)){
        printk(KERN_ERR ": Process with PID %d tried excess reads", current->pid);
        return -EACCES;
    }

    //read the left most entry in dequeue
    struct dequenode *left_node = list_first_entry(&node->dequeue, struct dequenode, elem);
    list_del(&(left_node->elem));
    int left_val = left_node->value;
    kfree(left_node);

    int ret_val = copy_to_user(buf, (int32_t*)&left_val, count < sizeof(left_val) ? count : sizeof(left_val));
    if(!left_val)
	{
		printk(KERN_ALERT ": PID %d Sent %ld chars with value %d to the user\n", current->pid, sizeof(left_val), left_val);
		return sizeof(left_val);
	}

	else
	{
		printk(KERN_ERR ": PID %d Failed to send retval : %d, Rear Value is %d\n", current->pid, left_val, left_val);
		return -EACCES;
	}

}

//callback for writing to proc file
static ssize_t callback_write(struct file *file, const char* buf, size_t count, loff_t* pos) {

    if(buf==NULL || count<=0)
		return -EINVAL;

    //check for initialization errors
    if (copy_from_user(buf, buf, count < 256 ? count : 256))
		return -ENOBUFS;

    struct hashnode *node = get_key(current->pid);
    if(!node){
        printk(KERN_ERR ": No key entry in hashtable for PID: %d\n", current->pid);
        return -1;
    }

    if(!(node->dequeue).next){
        printk(KERN_ERR ": Dequeue not initialized properly in hashtable for PID: %d\n", current->pid);
        return -1;
    }

    int buffer_len = count < 256 ? count : 256;
    if(node->size == -1) {

        //if first write not yet done (size not initialized)
        if(buffer_len != 1){
            printk(KERN_ERR ": PID %d Invalid buffer size: %d to set dequeue size\n", current->pid, buffer_len);
		    return -EACCES;
        }

        int dq_size = buf[0];
        if(dq_size<=0 || dq_size>100)
        {
            printk(KERN_ERR ": PID %d Invalid dequeue size: %d\n", current->pid, dq_size);
            return -EINVAL;
        }
        node->size = dq_size;
        printk(KERN_ALERT ": PID %d dequeue size set at: %d", current->pid, dq_size);

        return buffer_len;

    }
    else {

        //get integer from each write call
        if(buffer_len != 4){
            printk(KERN_ERR ": PID %d Invalid buffer size: %d to insert into dequeue\n", current->pid, buffer_len);
		    return -EACCES;
        }
        if(node->entry_count >= node->size){
            printk(KERN_ERR ": Process with PID %d tried excess writes", current->pid);
		    return -EACCES;
        }
        char arr[4];
        int num;
        memset(arr, 0, 4 * sizeof(char));
		memcpy(arr, buf, buffer_len * sizeof(char));
		memcpy(&num, arr, sizeof(num));

        //push to dequeue according to given logic
        if(num%2)
            push_front_dq(num, &(node->dequeue));
        else
            push_back_dq(num, &(node->dequeue));
        node->entry_count++;
        printk(KERN_ALERT ": PID: %d wrote %d to Dequeue[entry count: %d]\n", current->pid, num, node->entry_count);

        return sizeof(num);

    }

}

//function to initialize LKM module
static int hello_init(void)
{
    printk(KERN_ALERT "LKM init started\n");

    //intialize proc file callbacks struct
    static const struct proc_ops file_options =
    {
        .proc_open = callback_open,
        .proc_read = callback_read,
        .proc_write = callback_write,
        .proc_release = callback_release,
    };

    //create proc file
    struct proc_dir_entry *entry = proc_create(PROCESS_NAME, 0666, NULL, &file_options);
	if (entry == NULL)
		return -ENOENT;

    //initialize hashtable
    hashhead = kmalloc(sizeof(struct list_head), GFP_KERNEL);
    INIT_LIST_HEAD(hashhead);

	printk(KERN_ALERT "LKM initialized started\n");

    return 0;
}

//function to clean up after LKM module
static void hello_exit(void)
{
    printk(KERN_ALERT "Exiting LKM...\n");

    //free each node of hashtable
    if(hashhead->next) {
        struct hashnode *itr, *temp;
        mutex_lock(&hashtable_mutex);
        list_for_each_entry_safe(itr, temp, hashhead, elem) {

            free_node_dequeue(itr);
            list_del(&itr->elem);
            kfree(itr);

        }
    }
    //free hashtable base
    kfree(hashhead);

    mutex_destroy(&hashtable_mutex);
    remove_proc_entry(PROCESS_NAME, NULL);

    printk(KERN_ALERT "Goodbye from LKM\n");
}

module_init(hello_init);
module_exit(hello_exit);
