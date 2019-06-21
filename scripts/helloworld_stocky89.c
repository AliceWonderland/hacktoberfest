#include <stdio.h>

int main(void) {
        char str[] = "Hello World!\n";
        for (int i=0; i<sizeof str; i++) printf("%c", str[i]);
        return 0;
}
