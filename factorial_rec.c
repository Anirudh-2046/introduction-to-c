#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int f= factorial(n);
    printf("%d",f);
    return 0;
}