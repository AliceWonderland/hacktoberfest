#include <stdio.h>
int count;
int tower(int n, char s, char h, char d)
{

    if (n == 0)
        return;

    tower(n - 1, s, d, h);
    printf("%c --> %c\n", s, d);
    count++;
    tower(n - 1, h, s, d);
    return;
}

int main()
{
    printf("Enter the number of DISCs\n");
    int disc;
    scanf("%d", &disc);
    tower(disc, 'A', 'B', 'C');
    printf("%d", count);
}
