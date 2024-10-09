#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,sum=0;
    printf("Enter the 5 digit number");
    scanf("%d",&n);
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    printf("sum of digits =%d",sum);
    return 0;   
}