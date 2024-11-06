#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,sum=0;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    int marks[n];
    printf("\nenter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    printf("sum of elements of array=%d ",sum);
    return 0;
}