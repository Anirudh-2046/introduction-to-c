#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element you want to delete in array:");
    scanf("%d",&num);
    //logic for deleting all occurance of element in array
    for(int i=0;i<n;)
    {
        if (arr[i]==num)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
        }
        else 
        i++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}