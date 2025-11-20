#include <stdio.h>
#include <string.h>
void main()
{
    //create
    char name [10] = "Jwalitha";
    char new[100] = "Hello ";

    //access
    printf("%c\n", name[7]); 

    //length
    printf("Length of string is %d\n", strlen(name));

    //concatenation
    strcat(new, name); // new = Hello+Jwalitha
    printf("%s\n", new);
    // search for a char in string!
    if ((strstr(new, "Jwalitha"))!= NULL )  
    {
        printf("Found");
    }
}
