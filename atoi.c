#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char str1[20];
    printf("enter string in numbers or string start with number/s:");
    gets(str1);
    int x=atoi(str1);
    printf("%d",x);
    return 0;
}