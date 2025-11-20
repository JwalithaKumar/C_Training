#include <stdio.h>
void display(int n)
{
    if (n>5) //base cond.
    return;
    printf("%d ", n);
    display(n+1); //recursive call
}
void main()
{
    display(1);
}