#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,target,sum=0;
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter target:");
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[i]+arr[j];
            if(sum==target)
            {
                printf("%d %d",i,j);
                break;
            }
        }
    }
    return 0;
}