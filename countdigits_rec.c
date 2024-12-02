#include<stdio.h>
extern int count1=0;
int count(int n)
{
    if(n!=0)
    return count1++ + count(n/10);
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int count2 = count(n);
    printf("%d",count2);
    return 0;
}