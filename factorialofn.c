#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,factorial=1;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      factorial*=i;
    }
    printf("%d",factorial);
    return 0;    
}