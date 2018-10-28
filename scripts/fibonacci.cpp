#include<stdio.h>
main()
{
int a=1,b=1,c=1,d,n=1;
cout<<a<<endl;
cout<<b<<endl;
while(n!=8)
{
a=b;
b=c;
c=a+d;
cout<<c<<endl;
n++;}
getch();
}
