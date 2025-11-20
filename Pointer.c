#include <stdio.h>
void main()
{
    int a = 90;
    int *p = &a;
    printf("a value is %d\n", a);
    printf("a address is %p\n", p);
    printf("P points to %d", *p);
}