#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("enter string 1:");
    gets(str1);
    strcpy(str2,str1);
    printf("string 2 is %s",str2);
    return 0;
}