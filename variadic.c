#include <stdio.h>
#include <stdarg.h>
int sum(int count, ...)
{ 
    va_list list; 
    va_start(list, count); 
    int s = 0; 

    for(int i = 0; i < count; i++) 
    s = s + va_arg(list, int); 
    
    va_end(list); 
    return s; 
} 
    
    void main() 
    { 
        printf("%d", sum(6, 1,1,1, 1, 1, 1)); 
    }