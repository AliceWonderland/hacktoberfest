// LANGUAGE: c
// AUTHOR: Costa Soutos
// GITHUB: https://github.com/csoutos

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
  char *string = "Hello World";
  int length = strlen(string);
  
  for(int x = 0; x < length; x++){
    printf("%c",string[x]);
  }
  printf("\n");
  return 0;
}
