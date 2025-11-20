#include <stdio.h>
void main()
{
    int arr[3][2] = {   {21,33} , {31,47}, {15,69}  };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}