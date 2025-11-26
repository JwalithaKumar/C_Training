#include <stdio.h>
 
void names ( char first[], char last[], int sw)
{
    char full[100];
   int i=0;
   while(first[i] != '\0')
   {
        full[i] = first[i];
        i++;
   }
   full[i++] = ' ';

   int j=0;
   while(last[j] != '\0')
   {
        full[i] = last[j];
        i++;
        j++;
   }
  full[i] = '\0';
    printf("%s\n", full);

    int len=0;
    while (full[len]!= '\0')
   { len++; }
   if (len<sw)
   printf("Fits in screen");
   else
   printf("Does not fit");
}
void main()
{
    char first[100] = "Jwalitha";
    char last[100] = "Jemy";
    names(first, last, 20);
}