#include <stdio.h>
int search (int arr[], int size, int key)
{
   for (int i =0; i<size; i++)
   {
    if (arr[i] == key)
    return 1;
   }
   return 0;

}

void main()
{
    int arr[6] = {10, 13, 16, 18, 20, 23};
    printf("%d", search(arr, 6, 90));
}