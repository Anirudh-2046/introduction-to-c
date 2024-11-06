#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    int marks[n];
    printf("\nenter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("marks=");
    for(int i=0;i<n;i++)
    {
        printf("%d ",marks[i]);
    }
    int marks2[n];
    printf("\nmarks2=");
    for(int i=0;i<n;i++)
    {
        marks2[i]=marks[i];
        printf("%d ",marks2[i]);
    }
    return 0;
}