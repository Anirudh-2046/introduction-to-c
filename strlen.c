#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    printf("enter password:");
    gets(password);
    int len=strlen(password);
    printf("no of charatcter in password string in %d",len);
    return 0;
}