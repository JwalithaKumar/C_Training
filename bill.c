#include <stdio.h>
void main()
{   
    int t;
    int result=0;
    int units[3] = {3,4,10};
    int cost_per_unit[3] = {4,6,1};
    for (int i =0; i<3; i++)
    {
        t = units[i]*cost_per_unit[i];
        result = result + t;
    }
    printf("Total Revenue is %d", result);
}