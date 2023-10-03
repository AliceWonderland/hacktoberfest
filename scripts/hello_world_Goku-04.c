// LANGUAGE: C
// ENV: gcc-12
// AUTHOR: Ranbeer Malhotra
// GITHUB: https://github.com/Goku-04
// You may opt-in for CS50 to learn C: https://cs50.harvard.edu/x
// For a linux system:
// compilation: cc hello_world_Goku-04.c -o hello_world
// execution: ./hello_world


#include <stdio.h>

int main()
{
    // max size of name can be 30
    char name[30];
    printf("Enter your name: ");
    // take user input
    fgets(name, sizeof(name), stdin);
    // print following statements on terminal
    printf("Hello World!\n");
    printf("Hello, %s!\n", name);
    return 0;
}