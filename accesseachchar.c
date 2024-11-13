#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[30];
    printf("enter string");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        printf("%c ",str[i]);
    }
    return 0;
}