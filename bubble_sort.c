#include <stdio.h>
void bubble (int arr[], int n)
{
    int temp = 0;
    for (int i =0 ; i<n ; i++)
    {
        for (int j = i+1; j<n; j++)
        {
            while(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k =0 ; k<n ; k++)
    {
        printf("%d  ", arr[k]);
    }
}

void main()
{
    int arr[5] = {10,13,45,6,19};
    int n = 5;
    bubble(arr, n);
}

