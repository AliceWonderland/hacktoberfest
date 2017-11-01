// LANGUAGE: c
// ENV: gcc
// AUTHOR: Justin Walsh
// GITHUB: https://github.com/thejustinwalsh

#include "stdio.h"

int main (int argc, char** argv)
{
    char message[] = {
        'H', 'e', 'l', 'l', 'o', ' ',
        'W', 'o', 'r', 'l', 'd', 0 
    };

    printf("%s\n", message);
    
    return 0;
}