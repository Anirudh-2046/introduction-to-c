#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,a=0,b=1,c;
    printf("enter n");
    scanf("%d",&n);
    printf(" %d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c); 
        a=b;
        b=c;
    }
    return 0;
}