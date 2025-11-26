#include <stdio.h>
#include <string.h>
struct student {
        char name[100];
        int age;
        float marks;
    };

void main()
{
    struct student s;
    struct student *p = &s;
    p->age = 45;
    p->marks = 67.9;
    strcpy(p->name , "Joe");
    printf("%s", p->name);

}