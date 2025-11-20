// C program to calculate distance between two points
// x1,y1 , x2,y2
// sqrt(x2-x1^2  +  y2-y1^2)
#include <stdio.h>
#include <math.h>
void main()
{
    int x1, y1, x2, y2;
    printf("Enter the values of x1,y1: ");
    scanf("%d%d", &x1,&y1 );
    printf("Enter the values of x2,y2: ");
    scanf("%d%d", &x2,&y2 );
    int d1 = x2-x1;
    int d2 = y2-y1;
    double dist = sqrt((d1*d1) + (d2*d2));
    printf("Distance is %lf", dist);
}