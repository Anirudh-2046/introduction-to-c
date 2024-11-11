#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,m;
    printf("Enter no of rows:");
    scanf("%d",&n);
    printf("Enter no of columns:");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter 2d array elemnts:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements of 2d array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}