#include <stdio.h>
#include <stdlib.h>

void main() {
    int *p = (int*) malloc(3 * sizeof(int));

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    // increase size to 5 integers
    p = (int*) realloc(p, 5 * sizeof(int));

    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i < 5; i++)
        printf("%d ", p[i]);

    free(p);
}
