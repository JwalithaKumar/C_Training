#include <stdio.h>
#include <string.h>

void main()
{
    char des [100] = "We are super kids" ;
    char se [10] = "good";
    if ((strstr(des, se)) != NULL)
    printf("Found");
    else
    printf("Not found");
}