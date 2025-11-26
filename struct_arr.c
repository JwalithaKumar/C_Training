#include <stdio.h>
#include <string.h>
struct student {
        char name[100];
        int age;
        float marks;
    };

void main()
 {
 
    struct student s[3];
    s[0].age = 45;
    s[1].age = 67;
    s[2].age = 90;

    printf("%d", s[0].age);
}