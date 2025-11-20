#include <stdio.h>
void main()
{   
    int t;
    int result=0;
    int q[3] = {3,4,10};
    int c[3] = {4,6,1};
    for (int i =0; i<3; i++)
    {
        t = q[i]*c[i];
        result = result + t;
    }
    printf("Total sales is %d", result);
}