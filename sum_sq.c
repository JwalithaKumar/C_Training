#include <stdio.h>
int sos (int x, int y)
{
    int sum = x*x + y*y ;
    return sum;
}

void main()
{
    int x = 9, y= 1;
    printf("Sum is %d", sos(x,y));
}