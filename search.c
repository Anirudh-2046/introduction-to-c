#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,flag=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter Searching element:");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Element found at %d position",i);
    else
    printf("Element not found");
    return 0;
}