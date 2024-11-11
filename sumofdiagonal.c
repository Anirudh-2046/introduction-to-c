#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("enter no of rows and columnns:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter elements of 2d array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i][i];
    }
    printf("sum of diagonal elements is=%d",sum);
    return 0;
}