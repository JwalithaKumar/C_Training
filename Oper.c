#include <stdio.h>
void main()
{
    int n1 = 90 ;
    int n2 = 12 ;
    int sum = n1 + n2;
    int sub = n1 - n2;
    int prod = n1 * n2 ;
    int quo = n1 / n2 ;
    int rem = n1 % n2 ;
    printf("Addition: %d \n", sum);
    printf("Subtraction: %d \n", sub);
    printf("Multiplication: %d \n", prod);
    printf("Division (Q): %d \n", quo);
    printf("Division (R): %d \n", rem);
}