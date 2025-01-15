#include<stdio.h>
int main()
{
    int n,target,output;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<n;i++)
    {
        if(target==arr[i])
        {
            output=i;
        }
        else
        {
            if(target>arr[i] && target<arr[i+1])
            {
                output=i;
            }
        }
    }
    printf("%d",output);
    return 0;
}