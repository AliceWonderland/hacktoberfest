
// LANGUAGE: C
// ENV: Console
// AUTHOR: Artur Eiji
// GITHUB: https://github.com/artureiji


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee{
    char* name;
    char* github;
    char* extraKey[10];
    char* extraValue[10];
    int extraCount;
};

int compare(const void *s1, const void *s2)
{
    struct employee *e1 = *(struct employee **)s1;
    struct employee *e2 = *(struct employee **)s2;
    return strcmp(e1->name, e2->name);
}
void readName(char* dump, FILE* file) {
    int c;
    int i = 0;
    do {
        c = fgetc(file);
    } while (c != '[');

    c = fgetc(file);
    do {
        dump[i] = c;
        i++;
        c = fgetc(file);
    } while (c != ']');
    dump[i] = 0;
}
int main() {
    int n = 4000;
    struct employee** dados = malloc(n * sizeof(struct employee*));
    struct employee* atual;
    int extraCount, count = 0;
    char* key;
    char* value;
    FILE *file;
    file = fopen("../CONTRIBUTORS.md", "r");

    while (count < n) {
        dados[count++] = NULL;
    }
    count = 0;

    printf("Lets sort this!\n");
    if (file) {
        while (EOF != fscanf(file, "#### Name:")) {
            atual = malloc(sizeof(struct employee));
            dados[count++] = atual;

            atual->name = malloc(100 * sizeof(char));
            atual->github = malloc(100 * sizeof(char));

            readName(atual->name, file);
            fscanf(file, "%s ", atual->github);

            extraCount = 0;
            while (extraCount < 10) {
                atual->extraKey[extraCount++] = NULL;
                atual->extraValue[extraCount++] = NULL;
            }
            extraCount = 0;
            while ('\n' != fgetc(file) && EOF != fscanf(file, "- ")) {
                key = malloc(100 * sizeof(char));
                value = malloc(500 * sizeof(char));
                fscanf(file, "%s ", key);
                fgets(value, 500, file);
                value[strlen(value) - 1] = 0;
                atual->extraKey[extraCount] = key;
                atual->extraValue[extraCount++] = value;
                printf("%s's %s = %s\n", atual->name, key, value );
            }
            atual->extraCount = extraCount;
        }
        fclose(file);
    }

    qsort(dados, count, sizeof(struct employee*), compare);

    n = 0;
    file = fopen("../CONTRIBUTORS.md", "w");
    while (n < count) {
        if (n == 0 || strcmp(dados[n]->name, dados[n-1]->name) != 0) {
            printf("%d - %s\n", n, dados[n]->name);
            fprintf(file, "#### Name: [%s]%s\n", dados[n]->name, dados[n]->github);
            extraCount = 0;
            while(extraCount < dados[n]->extraCount) {
                fprintf(file, " - %s %s\n", dados[n]->extraKey[extraCount], dados[n]->extraValue[extraCount]);
                extraCount++;
            }
            fprintf(file, "\n");
        }
        n++;
    }
        fclose(file);

    scanf("");
    return 0;
}
