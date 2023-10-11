#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("Factorial is %d.\n",fact(n));
    return 0;
}

int fact (int x)
{
    if(x==0)
    return 1;
    else
    return x*fact(x-1); 
}
