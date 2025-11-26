#include <stdio.h>

struct Student {
    char name[20];
    int age;
};

void showByValue(struct Student s) {
    printf(s.age);
    s.age = 99;  // only local copy changes
    print(s.age);
}

void showByReference(struct Student *p) {
    printf(p->age);
    p->age = 99;  // original changes
    printf(p->age);
}

int main() {
    struct Student s1 = {"Jemy", 20};

    printf("%d\n",s1.age);

    // call by value
    showByValue(s1);
    printf("%d\n",s1.age);

    // call by reference (using pointer)
    showByReference(&s1);
    printf("%d\n",s1.age);

    return 0;
}
