#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) calloc(4, sizeof(int));  // 4 integers, all initialized to 0

    for (int i = 0; i < 4; i++)
        printf("%d ", p[i]);   // will print 0 0 0 0

    free(p);
    return 0;
}
