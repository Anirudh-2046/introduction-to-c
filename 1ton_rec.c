#include<stdio.h>
void series(int n)
{
    if(n!=0)
    {
    series(n-1);
    printf("%d ",n);
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    series(n);
    return 0;
}