//wap to perform sum of all input nos from user until user enter 0
#include<stdio.h>
int main()
{
    int sum=0,n;
    do 
    {
        printf("enter no:");
        scanf("%d",&n);
        sum+=n;
    }
    while(n != 0);
    printf("sum=%d",sum);
    return 0;
}