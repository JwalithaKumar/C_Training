#include <stdio.h>
enum days
{
    Monday, Tuesday, Wednesday, Thursday 
};
void main()
{
    enum days day;
    day = Thursday;
    printf("%d", day);
}