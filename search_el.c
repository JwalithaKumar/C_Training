#include <stdio.h>
int search (int arr[], int key, int n)
{
    for (int i =0; i<n ; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}

void main()
{
    int arr[7] = {34, 341, 265, 78, 90, 45, 56};
    int n = 7;
    int key;
    printf("What are u searching?  ");
    scanf("%d", &key);
    printf("%d", search(arr,key,n));
}