#include <stdio.h>

int main(int argc,char **argv) {
  printf("Hallo");
  for (int i=1;i<argc;++i) {
    printf(" %s",argv[i]);
  }
  printf(" Welt\n");
  return 0;
}
