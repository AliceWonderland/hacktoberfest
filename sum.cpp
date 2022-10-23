#include<iostream>
#include<string.h>
int pal(string &hello,int n,int i)
{

    if(i>=n)
    {
        return 1;
    }
    if(hello[i]!=hello[n])
    {
        return 0;
    }
    pal(hello,n-1,i+1);
    
}

using namespace std;
int main()
{
    string hello;
    cin>>hello;
    //cout<<hello.length()<<endl;
  cout<<pal(hello,hello.length()-1,0);
    
    
}
