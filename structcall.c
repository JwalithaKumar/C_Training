#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

void showByValue(struct Student s) {
    printf("Before: \n");
    printf("%d\n",s.age);
    s.age = 99;  // only local copy changes
    printf("After: \n");
    printf("%d\n", s.age);
}

void showByReference(struct Student *p) {
    printf("Before: \n");
    printf("%d\n",p->age);
    p->age = 99;  // original changes
     printf("After: \n");
    printf("%d\n",p->age);
}

int main() {
    struct Student s1 = {"Jemy", 20};

    printf("Alloted : %d\n",s1.age);

    // call by value
    printf("Call By value \n");
    showByValue(s1);
    printf("After call by value: ");
    printf("%d\n",s1.age);

    // call by reference (using pointer)
     printf("Call By ref \n");
    showByReference(&s1);
    printf("After call by ref: ");
    printf("%d\n",s1.age);

    return 0;
}
