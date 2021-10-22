#include <stdio.h>

int main() {
    int number;
    char name;

    printf("Enter Your Age: ");
    scanf("%d", &number);



    if (number <80 ) {
        printf("Enter Your Name: ");
        scanf("%s", name);
        
    }

    printf("Hello %s.\n", name);

    return 0;
}
