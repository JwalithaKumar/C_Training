//array of 3 integers!
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) malloc(3 * sizeof(int));  // memory for 3 integers

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    printf("%d %d %d", p[0], p[1], p[2]);

    free(p);
    return 0;
}
