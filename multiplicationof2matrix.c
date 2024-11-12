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
    //multiply of matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m1;j++)
        {
            int sum=0;
            for(int k=0;k<m1;k++)
            {
                sum=sum+arr[i][k]*array[k][j];
            }        
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}
