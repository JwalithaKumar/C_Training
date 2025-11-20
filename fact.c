// Write a c program to gen sum of n natural numbers!
#include <stdio.h>
void main()
{
int result = 1;
int n;
printf("Enter n: ");
scanf("%d", &n);
for (int i = 1; i<=n; i++)
{
    result = result * i;
}
printf("Product is %d", result);
}