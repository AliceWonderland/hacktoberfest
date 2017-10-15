// LANGUAGE: C
// AUTHOR: Jean-Marc F.
// GITHUB: https://github.com/Atlas34

#include <stdio.h>

#define GREEN  "\x1B[32m"
#define RESET  "\x1B[0m"

void main()
{
    printf(GREEN "Hello, World!" RESET);
    getch();
}
