#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
    return 0;
}
