#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,rem,ld;
    int sum=0;
    printf("enter number:");
    scanf("%d",&n);
    ld=n%10;
    n=n/10;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    if(sum==ld)
    printf("yes");
    else
    printf("no");
    return 0;

}