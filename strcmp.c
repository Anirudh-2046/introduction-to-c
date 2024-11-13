#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char str1[30],str2[30];
    printf("enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);
    int x=strcmp(str1,str2);
    if(x==0)
        printf("both are same");
    else if(x==-1)
        printf("string 1 is less than string 2");
    else
        printf("string 1 is greater than string 2");
    return 0;
}