#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void insertAtHead(node*&head,int data){
	node* n = new node(data);
	n -> next = head;
	head = n;
}
void print(node*&head){
	while(head!=NULL){
		cout << head -> data<<" ";
		head = head-> next;
	}

}
int main(){
	node* head = NULL;
	insertAtHead(head,9);
	insertAtHead(head,4);
	insertAtHead(head,6);
	insertAtHead(head,1);
	print(head);
}
