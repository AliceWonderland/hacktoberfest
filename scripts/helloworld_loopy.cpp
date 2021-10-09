#include<iostream>
using namespace std;

void print(int n)
{
    while(n--)
    {
        cout<<"HELLO WORLD"<<endl;

    }
}

int main()
{
    int n;
    cout<<"enter how many times to print hello world :";
    cin>>n;
    cout<<endl;

    print(n);
}