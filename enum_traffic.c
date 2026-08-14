#include <stdio.h>
#include <string.h>
enum grades
{
    RED, YELLOW, GREEN
};

int main()
{
    enum traffic t;
    t = RED;
    switch(t)
    {
        case RED : printf("STOP");
        break;
         case YELLOW : printf("READY");
        break;
         case GREEN : printf("GO");
        break;
    }
}
