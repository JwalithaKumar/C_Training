//Perimeter
#include <stdio.h>
float perimeter (int r)
{
    const float pi = 3.14;
    float peri = 2*pi*r;
    return peri;
}

void main()
{
    int r = 9;
    printf("%f", perimeter(r));//call
}