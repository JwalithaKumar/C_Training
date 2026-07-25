#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bank
{
    char ac_no[100];
    int pin;
    float bal;
};
int main()
{
    FILE *fp;
    int n,i;
    printf("How many accounts? ");
    scanf("%d", &n);
    struct bank b[n];
    fp = fopen("D:\\ac_details.txt", "w");
    for (i=0; i<n; i++)
    {
        printf("Enter ac_no, pin, balance: ");
        scanf("%s %d %f", &b[i].ac_no, &b[i].pin, &b[i].bal);
        fprintf(fp, "Account number is %s.  Pin is %d.  Balance is %f \n ",b[i].ac_no, b[i].pin, b[i].bal );
    }
    fclose(fp);
return 0;
}