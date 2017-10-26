#include<stdio.h>

char *c[] = { "OLD", "WALLOW", "HERE", " SWORE" };
char **cp[] = { c+3, c+2, c+1, c };
char ***cpp = cp;

main()
{
    printf("%.2s", **++cpp);
    printf("%.3s ", **++cpp+2);
    printf("%.3s", cpp[1][3]+2);
    printf("%s", *cpp[1]+1);
    printf("%c\n", *(*cpp[-2])+1);
    return 0;
}
