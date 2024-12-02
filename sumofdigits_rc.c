#include<stdio.h>
int sum_of_d(int n)
{
    int sum=0;
    if(n==0)
    return 0;
    else
    return sum+n%10 + sum_of_d(n/10);
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int sum=sum_of_d(n);
    printf("%d",sum);
    return 0;
}