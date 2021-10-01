#include<iostream>
using namespace std;

void print_hello_world(int n)
{
    while(n--)
    {
        cout<<"HELLO WORLD"<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter no of times to print hello world :";
    cin>>n;

    print_hello_world(n);
    return 0;
}