// LANGUAGE: C
// AUTHOR: Jesús Trancoso Jiménez
// GITHUB: https://github.com/jtrancoso

// Just a fun way to write a Hello, World!

#include <stdio.h>

int main (void)
{
	char *hello = "Hello, World!";
	int i = 0;
	
	while (hello[i])
	{
		printf("%c", hello[i]);
		i++;
	}
	printf("\n");
	return (0);
}