#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

int main(){
  pid_t pid;
  pid = fork();

  if(pid == 0){
    printf("Hello from child process to the world !\n");
  }
  else{
    wait(NULL);
  }
}
