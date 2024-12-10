#include<Stdio.h>
int main()
{
    int a,b;
    int *p1=&a,*p2=&b;
    printf("enter two numbers:");
    scanf("%d %d",p1,p2);
    printf("Sum=%d",*p1+*p2);
    return 0;
}