#include <stdio.h>
int bin_search (int key, int arr[], int n)
{
    int l = 0, mid;
    int r = n-1;
    while(l<=r)     // 14, 56, 89, 90, 100
    {
       mid = (l+r)/2;     // 0+4/2 = 2      0+1/2 = 0
       if (key==arr[mid]) // 14==89 F       14 == 14
       return 1;
       else if (key > arr[mid]) //14>89 F
        l = mid+1;
        else             // 14<89
        r = mid-1;      //1 
    }
    return -1;
}
int main()
{
    int arr[10] = {12, 34, 55, 57, 67, 77, 79, 89, 100, 103};
    printf("%d", bin_search(177, arr, 10));
}