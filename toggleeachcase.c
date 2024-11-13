#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[30];
    printf("enter string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
        else if (str[i]>=65 && str[i]<=90)
            str[i]+=32;
    }
    printf("%s",str);
    return 0;
}