#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//outer loop is for no of rows
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
    printf("\n");
    }
}
