#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b;
    printf("Enter two numbers-");
    scanf("%d %d",&a,&b);
    (a>b)? printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);
    return 0;

}