#include<stdio.h>
void fibonacci(int n)
{
    static int a=0,b=1;
    if(n!=0)
    {
    fibonacci(n-1);
    printf("%d ",a);
    int c=a+b;
    a=b;
    b=c;
    
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}