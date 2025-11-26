#include <stdio.h>
union data
{
    int money;
    float tax;
};
void main()
{
    union data u;
    //write
    int m;
    printf("Enter money: ");
    scanf("%d", &m);
    u.money = m;
    printf("%d\n", u.money);
    //overwrite
    int t;
    printf("Enter tax: ");
    scanf("%d", &t);
    u.tax = t;
    printf("%d\n", u.money);
    // overwrite twice
    u.money = m-t;
    printf("%d\n", u.money);

}