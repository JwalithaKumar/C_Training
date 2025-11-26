#include <stdio.h>
#include <string.h>
struct student {
        char name[100];
        int age;
        float marks;
    };

 void main()
 {
 
    struct student s1;
    strcpy(s1.name , "Jwalitha");
    s1.age = 24;
    s1.marks = 99.99;

    struct student s2 = {"Rajesh", 22, 89.9};  

    printf("%d", s1.age);
    printf("%d", s2.age);
}