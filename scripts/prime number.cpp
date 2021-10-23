#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ int y;
bool a=true;
cout<<"Enter any number= ";
cin>>y;
for (int x=2;x<y;x++){
if(y%x==0) 
{
 a=false;
cout<<"is not prime bcoz it is divisible by "<<x;
break;}
    }
 if(a==true)cout<<"Is prime.";   
getch();
}
