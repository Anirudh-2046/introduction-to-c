#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char operator;
    printf("enter operator");
    scanf("%c",&operator);
    switch(operator)
    {
        case '+':
            printf("enter a b =");
            scanf("%d %d",&a,&b);
            printf("=%d",a+b);
            break;
        case '-':
            printf("enter a b =");
            scanf("%d %d",&a,&b);
            printf("=%d",a-b);
            break;
        case '*':
            printf("enter a b =");
            scanf("%d %d",&a,&b);
            printf("%d",a*b);
            break;
        case '/':
            printf("enter a b =");
            scanf("%d %d",&a,&b);
            printf("%d",a/b);
            break;
        default:
            printf("Invalid Opertor");
    }    
    
    
    return 0;
}