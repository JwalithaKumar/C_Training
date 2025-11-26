#include <stdio.h>
void pro (int *a, int *b, int *c)
{
    int product = (*a) *  (*b) * (*c);
    printf("%d", product);
}
void main()
{
    int a = 9;
    int b = 8;
    int c = 2;
    pro(&a, &b, &c);
}