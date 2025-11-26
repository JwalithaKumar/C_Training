#include <stdio.h>
void sum_value (int a, int b)
{
    int sum = a+b;
    printf("%d", sum);
}
void sum_ref (int *a, int *b)
{
    int sum = *a+*b;
    printf("%d", sum);
}
void main()
{
    int a = 90;
    int b = 88;
    printf("Call by Value: \n");
    sum_value( a,b); // call by val
    printf("Call by Reference: \n");
    sum_ref(&a,&b); // call by ref
}