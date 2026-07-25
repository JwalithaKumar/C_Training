#include <stdio.h>
int psp (int arr[], int n, int limit)  // [8,5,3,12,6], 5
{
    int i,j, temp;
    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   if((arr[0]+arr[1])  < limit)
   return arr[0]*arr[1];
   else
   return 0;
}
int main()
{
    int arr[5] = {8,5,3,12,6};
    printf("%d ", psp(arr,5, 7));
}