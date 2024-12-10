#include<stdio.h>
void printarr1(int a[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}
void printarr(int *a)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int arr[5]={11,12,13,14,15};
    printarr(arr);
    printf("\n");
    printarr1(arr);
    return 0;
}