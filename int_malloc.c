#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0] = 78;
    p[1] = 90;
    p[2] = 100;
    p[3] = 125;
    printf("%d ", p[0]);
    free(p);
}