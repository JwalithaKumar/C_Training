#include <stdio.h>
enum month
{
    Jan = 1,
    Feb, March, April, May, June, July, Aug, Sept, Oct, Nov, Dec 
};
void main()
{
    enum month m;
    m= Feb;
    char *season;
    switch(m)
    {
        case Dec: case Jan: case  Feb:
        season = "Winter"; 
        break;
        case March: case April: case May:
        season = "Summer"; 
        break;
        case June: case July: case Aug:
        season = "Monsoon"; 
        break;
        case Sept: case Oct: case Nov:
        season = "Spring"; 
        break;

    }
    printf("%d month is %s", m, season);
}