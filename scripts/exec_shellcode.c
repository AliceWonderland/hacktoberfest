#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char code[64];
  fflush(stdout);
  fgets(code, 64, stdin);
  (*(void(*)()) code)();

  return 0;
}
