#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("enter string:");
    gets(str);
    strrev(str);
    printf("%s",str);
    return 0;
}