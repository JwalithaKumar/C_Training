#include <stdio.h>
int count = 100; // global
void display()
{
    printf("%d\n", count);
}
int main()
{
    display();
}