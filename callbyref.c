#include <stdio.h>
int call_val(int *ptr)
{
    *ptr = 67;
    return *ptr;
}
int main()
{
    int a = 90;
    int *ptr = &a;
    printf("Before call: %d\n", a);
    printf("%d\n",call_ref(ptr) );
    printf("After call: %d", a);

}