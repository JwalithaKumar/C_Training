#include <stdio.h>
int myadd (int a, int b)
{
  int sum = a+b;
  return sum;  
}
void main()
{
    int a = 90, b= 89;
    printf("%d\n", myadd(a,b));
    int c = 99, d= 12;
    printf("%d\n", myadd(c,d));
}

