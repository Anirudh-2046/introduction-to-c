#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float a,b,sum,multiply,divide,subtract;
    printf("enter the first number");
    scanf("%f",&a);
    printf("enter the second number");
    scanf("%f",&b);
    sum=a+b;
    multiply=a*b;
    divide=a/b;
    subtract=a-b;
    printf("Sum=%f",sum);
    printf("Multiply=%f",multiply);
    printf("Divide=%f",divide);
    printf("Subtract=%f",subtract);
    return 0;
    
}