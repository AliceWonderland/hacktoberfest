#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter your name\n");
	scanf("%[^\n]s",name);
	printf("\n\tHello World\n");
	printf("\n\n\tHello %s\n",name);

	return 0;
}
