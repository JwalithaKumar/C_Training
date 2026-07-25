#include <stdio.h>
#include <string.h>
int is_pal (char *s) //car
{
char rev[100];
strcpy(rev, s); // car copied into rev
strrev(rev); // rac
return strcmp(rev, s) == 0;
}

void main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("%d",is_pal(s));

}