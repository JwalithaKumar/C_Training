#include <stdio.h>
#include <string.h>
#include <ctype.h>
int pwdcheck (char pwd[100])
{
    int n = strlen(pwd);
    if (n < 4)
    {
        printf("Invalid because of length\n");
        return 0;
    }
    if (isdigit(pwd[0]))
    {
        printf("Invalid because starting with number!\n");
        return 0;
    }
    int spaceFlag=0, UpperFlag =0 , NumFlag = 0, i;
    for (i=0; i<n; i++)    // i=0
    {
        if (isspace(pwd[i]))  //isspace(pwd[0]) = j   pwd[1] = " "
        spaceFlag = 1;
        else if (isdigit(pwd[i]))
        NumFlag = 1;
        else if (isupper(pwd[i]))
        UpperFlag = 1;
    }
if ((spaceFlag==0) && (NumFlag==1) && (UpperFlag==1))
return 1;
else
return 0;

}


int main()
{
    char pwd[100] = "jkuH90yt";
    printf("%d", pwdcheck(pwd));
}