#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
    struct Student s1;
    struct Student *p = &s1;
    strcpy(p -> name, "Akshaya");
    p -> age = 17;
    p -> marks = 89.9; 
    printf("%d", p->age);

}