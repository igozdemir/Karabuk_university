#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *pnt;
    int n;

    printf("what is the array size?\n");
    scanf("%d", &n);
    getchar();

    pnt = (int*) malloc(n* sizeof(int));

    printf("enter string\n");
    fgets(pnt, n, stdin);

    printf("what is the new array size?\n");
    scanf("%d", &n);
    getchar();

    pnt = (char*) realloc(pnt, n * sizeof(char));

    printf("enter new string\n");
    fgets(pnt, n, stdin);
    
    printf("%s", pnt);
    free(pnt);

    return 0;
}
