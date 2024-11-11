#include<stdio.h>
int main()
{
    int arr[4][3]={{17,34,23},{67,23,19},{81,37,42},{52,39,40}};
    printf("elements of 2D array are:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}