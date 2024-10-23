#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,count=0;
    printf("enter n");
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }   
    printf("no of digits in %d=%d",a,count);  
    return 0;
}