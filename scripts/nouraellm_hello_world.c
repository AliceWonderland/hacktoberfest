#include <ctype.h> 
#include <stdio.h> 

int main() 
{
    char *str = "Hello World!\n";

    while (*str)
        putchar(tolower(*str++));

    return 0; 
}