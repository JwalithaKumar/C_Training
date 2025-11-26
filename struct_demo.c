#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{

struct student s1;
strcpy(s1.name, "Joey");
s1.age = 19;
s1.marks = 89.6;


struct student s2;
strcpy(s2.name, "Raj");
s2.age = 20;
s2.marks = 90.6;
strcpy(s2.name, "Raj");

struct student s3 = {"Popoye", 17, 99.9};

printf("%s ", s3.name);
printf("%d", s3.age);
}