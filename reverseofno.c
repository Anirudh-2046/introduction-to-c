#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rev=0;
    printf("enter no:");
    scanf("%d",&n);
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse=%d",rev);
    return 0;
}