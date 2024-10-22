#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i);
    }
    return 0;

}
