#include <stdio.h>

int main()
{
   int a = 40;
   int *ptr = &a;     // ptpt--> address of ptr --> a address
   int **ptpt = &ptr;
   printf("Address of ptr: %d\n", ptpt); //address of ptr
   printf("Address of a: %d\n", *ptpt); // --> address of ptr
    printf("Value a: %d\n", **ptpt); // --> address of ptr


    return 0;
}