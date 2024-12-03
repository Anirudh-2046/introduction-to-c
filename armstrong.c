#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,digits=0,rem;
    printf("enter number");
    scanf("%d",&n);
    int temp1=n;
    while(temp1!=0)
    {
        temp1=temp1/10;
        digits++;
    }
    int number=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(int)pow(rem,digits);
        n=n/10;
    }
    if(sum ==  number)
    printf("number is a armstrong");
    else
    printf("not a armstrong number");
    return 0;
    
}