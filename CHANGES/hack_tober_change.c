#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int eno;
    char ename[20];
    float sal;
};
int main()
{
    struct employee e[100];
    int i,n, eno_key,flag = 1;
    printf("enter number of records:\n");
    scanf("%d", &n);
    for  (i = 0; i < n; i++)
    {
        printf("enter the employee number:\n");
        scanf("%d",&e[i].eno);
        printf("enter the employee name: \n");
        fflush(stdin);
        gets(e[i].ename);
        printf("enter the employee salary:\n");
        scanf("%f", &e[i].sal);
    }
    printf("the list of the employee is : \n");
    for ( i = 0; i < n; i++)
        printf("%d %s %f\n", e[i].eno, e[i].ename, e[i].sal);
    printf("enter the employee number of record to be searched:\n");
    scanf("%d", &eno_key);
    for ( i = 0; i < n; i++)
    {
        if (e[i].eno == eno_key)
        {
            printf("%d %s %f\n", e[i].eno, e[i].ename, e[i].sal);
            flag = 0;
            break;
        }
    }
    if(flag == 1);{
        printf("employee not found!!");}
    return(0);
}