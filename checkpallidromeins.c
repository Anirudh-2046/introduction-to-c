#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[30],rev[30];
    printf("enter string:");
    gets(str);
    strcpy(rev,str);
    strrev(str);
    if(strcmp(str,rev)==0)
    {
        printf("string is pallidrome");
    }
    else
    printf("string is not pallidrome");
    return 0;
}