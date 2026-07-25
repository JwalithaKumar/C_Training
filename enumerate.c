#include <stdio.h>
enum days
{
    Monday, Tuesday, Wednesday, Thursday 
};
void main()
{
    enum days d;
    d = Thursday;
    printf("%d", d);
}