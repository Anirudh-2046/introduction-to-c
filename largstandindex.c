#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,largest=0,index;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(largest<arr[i])
        largest=arr[i];
        index=i;
    }  
    printf("Largest element of array is %d\n",largest);
    printf("index of largest element is %d",index);
    return 0;
}