/* LANGUAGE: C
 * AUTHOR: Thomas Vilan
 * GITHUB: https://github.com/Solumeus
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)	// i like pain
{
	char * dumbarray = malloc(sizeof(char) * 13);
	*(dumbarray + 0) = 72;
	*(dumbarray + 1) = 101;
	*(dumbarray + 2) = 108;
	*(dumbarray + 3) = 108;
	*(dumbarray + 4) = 111;
	*(dumbarray + 5) = 44;
	*(dumbarray + 6) = 32;
	*(dumbarray + 7) = 87;
	*(dumbarray + 8) = 111;
	*(dumbarray + 9) = 114;
	*(dumbarray + 10) = 108;
	*(dumbarray + 11) = 100;
	*(dumbarray + 12) = 33;
	*(dumbarray + 13) = 10;
	printf("%s", dumbarray);

	free(dumbarray);		// i mean comon we're not savages
    return 0;
}
