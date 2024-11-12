#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,m,sum=0,sum1=0;
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
    for(int i=0,j=m-1;i<n,j>=0;i++,j--)
    {
        sum1+=arr[i][j];
    }
    printf("sum of  right(main) diagonal elements is=%d\n",sum);
    printf("sum of  left(minor) diagonal elements is=%d",sum1);
    return 0;
}
