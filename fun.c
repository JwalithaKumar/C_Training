//write a c program which takes number of rats(r), food per rat(u)
// an array representing food in every house (arr), length of arr (n)
//return number of houses to be visited to feed all rats
#include <stdio.h>
#include <stdlib.h>
int rat (int r, int u, int arr[], int n )
{
    if(n==0)
    return -1;

    int fr = r*u;
    int fs = 0;
    for(int i=0; i<n; i++)
    {
        fs += arr[i];
        if (fs>=fr) // 21>= 80
        return i+1;
    }
    return 0;
}
void main()
{
  int arr[] = {2,3,2,4,1,5};
  printf("%d", rat(4,2,arr,6));
}