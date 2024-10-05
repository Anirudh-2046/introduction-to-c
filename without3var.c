#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a=%d",a);
    printf("value of b=%d",b);
    return 0;

}