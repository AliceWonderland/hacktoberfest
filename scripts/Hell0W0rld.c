#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "Haealalaoa aWaoaralada!";
	int i;
	
	for(i=0;i<strlen(str);i+=2)
	printf("%c",str[i]);
	
	return 0;
}
