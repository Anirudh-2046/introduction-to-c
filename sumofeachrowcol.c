#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,m,sum=0;
    printf("Enter no of rows and columns:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter 2d array elemnts:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    //for row sum
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+= arr[i][j];
        } 
        printf("sum of %d row = %d\n",i+1,sum);
    }
    //for column sum
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+= arr[j][i];
        } 
        printf("sum of %d column = %d\n",i+1,sum);
    }
    return 0;
}