/*
language: c
env: 
author: d-grossman
github:


*/


/*
make
insmod hello_world_d-grossman
ls /proc/hello_world
cat /proc/hello_world
rmmod hello_world_d-grossman

*/



#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/seq_file.h>

#define procfs_msg "Hello World\n"
#define procfs_name "hello_world"
#define procfs_parent NULL
#define procfs_perms 0644

static struct proc_dir_entry *hello_world_file;

static int
hello_world_show (struct seq_file *m, void *v)
{
  seq_printf (m, "%s\n", procfs_msg);

  return 0;
}

static int
hello_world_open (struct inode *inode, struct file *file)
{
  return single_open (file, hello_world_show, NULL);
}

static const struct file_operations hello_world_fops = {
  .owner = THIS_MODULE,
  .open = hello_world_open,
  .read = seq_read,
  .llseek = seq_lseek,
  .release = single_release,
};

static int __init
hello_world_init (void)
{
  hello_world_file =
    proc_create (procfs_name, procfs_perms, procfs_parent, &hello_world_fops);

  if (!hello_world_file)
    {
      return -ENOMEM;
    }

  return 0;
}

static void __exit
hello_world_exit (void)
{
  remove_proc_entry ("hello_world", procfs_parent);
}

module_init (hello_world_init);
module_exit (hello_world_exit);

MODULE_LICENSE ("GPL");
MODULE_AUTHOR ("d-grossman");
MODULE_DESCRIPTION ("procfs hello world");
