#include <stdio.h>
int sum_digits_recur (int n)
{
    if (n==0)
    return 0;
    int d = n%10;
    return d + sum_digits_recur(n/10);

}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d", sum_digits_recur(n));
}