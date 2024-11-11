#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,m,n1,m1;
    printf("enter number of rows and columns:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter elements of 1st matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter number of rows and columns:");
    scanf("%d %d",&n1,&m1);
    int array[n1][m1];
    printf("enter elements of 2nd matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        int sum=arr[i][j]+array[i][j];
        printf("%d ",sum);
        }
    }
    int sum[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&sum[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}