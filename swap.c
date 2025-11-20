#include <stdio.h>
void swap (float *b1, float *b2)
{
    float temp = *b1;
    *b1 = *b2;
    *b2 = temp;
    printf("After swappping: %f , %f", *b1,*b2);
}
void main()
{
    float b1 = 9000.34;
    float b2 = 78000.76;
    swap(&b1,&b2);

    
}