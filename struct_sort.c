#include <stdio.h>
struct student
{
    char name[100];
    float marks;
};
void main()
{
    struct student s[5];
    for(int i = 0; i<5; i++)
    {
        printf("Enter name: ");
        scanf("%s",s[i].name );
        
    }
}