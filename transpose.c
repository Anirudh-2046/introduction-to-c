#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,m;
    printf("enter number of rows and columns:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("enter elements of matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
