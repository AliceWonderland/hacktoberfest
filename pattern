// C program to print
// inverted pyramid
// pattern
#include <stdio.h>

// Driver code
int main()
{
int rows = 8, i, j, space;

for (i = rows; i >= 1; --i) 
{
	// Loop to print the blank space
	for (space = 0; 
			space < rows - i; ++space)
		printf(" ");
	
	// Loop to print the half of 
	// the star triangle
	for (j = i; j <= 2 * i - 1; ++j)
		printf("* ");
	
	// Loop to print the rest of 
	// the star triangle
	for (j = 0; j < i - 1; ++j)
		printf("* ");
	printf("\n");
}

return 0;
}
