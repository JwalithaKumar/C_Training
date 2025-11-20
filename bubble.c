#include <stdio.h>
void bubble (int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i<size; i++)
    {
        for (int j = i+1; j<size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k =0; k<size; k++)
    {
        printf("%d\t", arr[k]);
    }
}
void main()
{
    int arr[5] = {10, 45, 3, 12, 19};
    bubble(arr, 5);
}