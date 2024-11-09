#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++)
    {
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        if(i!=(j+1))
        arr[j+1]=val;
    }
    printf("After sorting elements are:");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}