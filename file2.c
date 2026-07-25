#include <stdio.h>
#include <stdlib.h>
struct Bank
{
    char name[100];
    float bal;
    int pin;

};
int main()
{
    int i, n;
    printf("Enter number of accounts: ");
    scanf("%d", &n);
    struct Bank b[n];  // create structure
    FILE *fp;
    fp = fopen("D:\\accounts.txt", "w"); //create file
    for(i=0; i<n; i++)
    {
        printf("Enter name, balance and pin: ");
        scanf("%s%f%d", b[i].name, &b[i].bal, &b[i].pin);
        fprintf(fp,"The name is %s has %f balance and pin is %d\n",
        b[i].name, b[i].bal, b[i].pin);
    }
    fclose(fp);

   
}