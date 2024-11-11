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
    printf("subtraction of two matrix=\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        int sub=arr[i][j]-array[i][j];
        printf("%d ",sub);
        }
    }
    return 0;
}