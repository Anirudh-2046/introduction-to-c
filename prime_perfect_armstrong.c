#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int p)
{
    int i=2,flag=0;
    while(i<=p/2)
    {
        if(p%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    printf("1");
    else
    printf("0");
   
}
int is_perfect(int pf)
{
    int sum=0;
    for(int i=1;i<=pf/2;i++)
    {
        if(pf%i==0)
        sum+=i;
    }
    if(sum==pf)
    printf("1");
    else
    printf("0");
}
int is_armstrong(int n)
{
    int sum=0,digits=0,rem;
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
    printf("1");
    else
    printf("0");
}
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(is_armstrong(num)==1)
    printf("number is armstrong number");
    else
    printf("Not a armstong number");
    if(is_perfect(num)==1)
    printf("number is perfect number");
    else 
    printf("Not a perfect number");
    if(is_prime(num)==1)
    printf("number is prime number");
    else
    printf("Not a prime number");
    return 0;

}