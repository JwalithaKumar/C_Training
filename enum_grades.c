#include <stdio.h>
#include <string.h>
enum grades
{
    F,A,B,C
};

int main()
{
    enum grades g;
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
  
    
    if (marks>0 && marks<35)
    g = F; // g=0
    else if (marks>34 && marks<50)
    g = C;
    else if (marks>=50 && marks<70)
    g = B;
    else if (marks>=70 && marks<100)
    g = A;
    
    char grade = "FABC"[g];//"FABC" [0] --> print enum name 'F'directly
    printf("%c", grade);
    
}
