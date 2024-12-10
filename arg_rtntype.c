//cube of a number with argument and return type
#include<stdio.h>
#include<stdlib.h>
int show(int n)
{
    return n*n*n;
}
int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    int cube=show(x);
    printf("%d",cube);
    return 0;
}