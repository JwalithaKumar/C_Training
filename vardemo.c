#include <stdio.h>
#include <stdarg.h> 
void display (int count, ...)
{
    va_list list; // create bag -> list
    va_start (list, count); // open bag and create sections
    for (int i = 1; i<= count; i++)
    {
        int n = va_arg(list,int); //access values from bag and save in 'n'
        printf("%d ", n);
    }
    va_end(list); // close the bag
}
void main()
{
    display(3,           67, 13, 90);
}