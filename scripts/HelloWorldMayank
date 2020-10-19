

#include<iostream>
#include<vector>
using namespace std;

class Node
{
	public:
	int data;
	Node *left,*right;
};

Node *newnode(int data)
{
	Node *temp=new Node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

bool inorder(Node *root)
{
    if(root==NULL)
        return 1;
    Node *current,*pre;
    current=root;
    vector<int> v;
    while(current)
    {
        if(current->left==NULL)
        {
            //cout<<current->data;
            v.push_back(current->data);
            current=current->right;
        }
        else
        {
            pre=current->left;
            while(pre->right!=NULL && pre->right!=current)
            {
                pre=pre->right;
            }
            if(pre->right==NULL)
            {
                pre->right=current;
                current=current->left;
            }
            else
            {
                pre->right=NULL;
                //cout<<current->data;
                v.push_back(current->data);
                current=current->right;
            }
        }
    }
    
    for(int i=0;i<v.size()-1;++i)
    {
        if(v[i+1]<=v[i])
            return 0;
    }
    return 1;
}

//2nd way

/*
bool check(Node *root,int min,int max)
{
    if(root==NULL)
        return 1;
    
    if(root->data>=max || root->data<=min)
        return 0;
    
    return 
        check(root->left,min,root->data)&&check(root->right,root->data,max);
}
bool isBST(Node* root) {
    // Your code here
    
    
    
    return (check(root,INT_MIN,INT_MAX));
    
}
*/

int main()
{
	Node *root = newnode(20);  
    root->left = newnode(8);  
    root->right = newnode(22);  
    root->left->left = newnode(4);  
    root->left->right = newnode(12);  
    root->left->right->left = newnode(10);  
    root->left->right->right = newnode(14); 
    
   cout<< inorder(root);
}
