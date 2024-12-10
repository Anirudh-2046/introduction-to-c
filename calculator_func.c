#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    if(b==0)
    {
    printf("Error!! denominator can't be zero\n");
    return 0;
    }
    return a/b;
}
int main()
{
    system("cls");
    int n,m;
    char operator;
    printf("Enter operation:");
    scanf("%c",&operator);
    printf("enter two numbers:");
    scanf("%d %d",&n,&m);
    
    switch(operator)
    {
        case '+':
        printf("Sum of numbers=%d",sum(n,m));
        break;

        case '-':
        printf("Subtraction of numbers=%d",sub(n,m));
        break;

        case '*':
        printf("Multiplication of numbers=%d",mul(n,m));
        break;

        case '/':
        printf("Division of numbers=%d",division(n,m));
        break;

        default:
        printf("Invalid Operator!!");
    }
    return 0;
}