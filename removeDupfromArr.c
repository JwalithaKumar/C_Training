#include <stdio.h>
void remove_dupli (int arr[], int n)
{
int j = 0;
int i;
for (i=1; i<n; i++)
{
    if (arr[j]!= arr[i])
    {
        j++;
        arr[j] = arr[i];
    }
}

for (i=0; i<=j; i++)
{
    printf("%d ", arr[i]);
}
}
int main()
{
    int arr[6] = {1,1,2,3,4,4};
    int n = 6;
    remove_dupli(arr,n);
}