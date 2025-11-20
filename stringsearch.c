#include <stdio.h>
#include <string.h>

void strsearch (char course[], char keyword[])
{
    if (strstr(course, keyword) != NULL)
    printf("Found");
    else
    printf("Not found");
}

void main()
{
    char course [100];
    char keyword [100];
    printf("Enter course: ");
    fgets(course, sizeof(course), stdin);
    printf("Enter keyword: ");
    fgets(keyword, sizeof(keyword), stdin);
    course[strcspn(course, "\n")] = '\0';
    keyword[strcspn(keyword, "\n")] = '\0';
    strsearch(course, keyword);
}