#include<stdio.h>
#include<Stdlib.h>
int main()
{
    system("cls");
    int n,rem;
    int factorial,sum=0;
    printf("enter number");
    scanf("%d",&n);
    int num=n;
    while(n!=0)
    {
        factorial=1;
        rem=n%10; 
        for(int i=1;i<=rem;i++)
        {
            factorial*=i;
           
        }
        sum+=factorial;
        n=n/10;
    }
    if(sum==num)
    printf("1");
    else 
    printf("0");
    return 0;
}