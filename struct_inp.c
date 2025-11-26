//structure for name of book, author, year
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book
{
    char name [100];
    char author [100];
    int year;
};

void main()
{
    int n;
    printf("Enter number of Books: ");
    scanf("%d", &n);
    struct Book b[n];
    for(int i = 0; i<n; i++)
    {
    printf("Enter name of Book: ");
    scanf("%s", b[i].name);

    printf("Enter author of Book: ");
    scanf("%s", b[i].author);

    printf("Enter year of Publication: ");
    scanf("%d", &b[i].year);
    }
    printf("Your information: \n");
    for(int i = 0; i<n; i++)
    {
        printf("%s\n", b[i].name);
        printf("%s\n", b[i].author);
        printf("%d\n", b[i].year);
    }
    

}
