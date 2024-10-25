#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    system("cls");
    int n,num,max=INT_MIN;
    printf("enter number of terms:");
    scanf("%d ",&n);
    printf("enter %d numbers:",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if(num>max)
        max=num;
    }
    printf("max=%d",max);
    return 0;
}