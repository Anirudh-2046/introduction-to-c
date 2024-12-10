#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int *p1=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("enter value:");                        // or
        scanf("%d",p1);                                // scanf("%d",p1+1)
        sum+=*p1;                                      // sum+=*(p1+1)
    }
    free(p1);
    printf("sum=%d",sum);
    return 0;
}