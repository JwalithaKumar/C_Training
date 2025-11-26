#include <stdio.h>
void names (char first[], char last[], int sw)
{
    int i = 0;
    char full[100];

    while (first[i]!= '\0') // adding first
    {
        full[i] = first[i];
        i++;
    }

    full[i] = ' '; // adding space
    i++;

    int j = 0;
    while (last[j]!= '\0') //adding last
    {
        full[i] = last[j];
        i++;
        j++;
    }
    full[i] = '\0';
    printf("%s\n", full);
    int len = i+1;
    if (len<sw)
    printf("Fits in the screen");
    else
    printf("Does not fit in the screen!");
    
    
}

void main()
{
    char first[100] = "Raj";
    char last [100] = "Kumar";
    int sw = 12;
    names(first,last,sw);
}