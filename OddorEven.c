#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if (num%2==0)
    {
       printf("the number is even");

    }
    else
    printf("the number is odd");
    return 0;
}