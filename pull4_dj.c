#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE = ");
    scanf("%d", &age);

    printf("THE ENTERED AGE IS %d ", age);

    if(age>=18)
    {
        printf("\nYOU CAN VOTE");
    }
    else if(age<18)
    {
        printf("\n YOU ARE SENIOR, YOU CANT VOTE");
    }
    else
    {
        printf("\nYOU CANT VOTE");
    }
    return 0;
}
