#include <stdio.h>
int main() 
{
    int s,t,a,b,n,m,d,i;
    int f1=0,f2=0;
    scanf("%d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&d);
        d = a+d;
        if(d>=s && d<=t)
            f1++;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&d);
        d = b+d;
        if(d>=s && d<=t)
            f2++;
    }
    printf("%d\n",f1);
    printf("%d\n",f2);
    return 0;
}
