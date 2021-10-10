//using iterative approach
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        this->data = x;
        left = right = NULL;
    }
    Node()
    {
    }
};

void left_view(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (i == 1)
                cout << temp->data << " ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    cout << "\n";
}

void right_view(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            Node *temp = q.front();
            q.pop();
            if (i == 1)
            {
                cout << temp->data << " ";
            }
            if (temp->right != NULL)
                q.push(temp->right);
            if (temp->left != NULL)
                q.push(temp->left);
        }
    }
    cout << "\n";
}
int main()
{
    Node *root;
    root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->left->right = new Node(4);
    root->right = new Node(5);
    root->left->right = new Node(6);
    left_view(root);
    //cout << "\n";
    right_view(root);

    return 0;
}
