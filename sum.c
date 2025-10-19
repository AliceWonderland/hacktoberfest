#include<stdio.h>

int sum(int a);
int main()
{
    int input;
    printf("entre the no\n");
    scanf("%d",&input);
    if ((input<1000000)&&(input>9999))
    {
        printf("%d\n",sum(input));

    }
    else
    {
        printf("invalid input\n");
    }
}
    
    int sum(int a)
    {
        if (a%10==0)
        {
           return a;
        }
        int s,n;
        n=a%10;
        s=n+sum(a/10);
        return s;
        
        
    }

