//cube of a number with argument but no return type
#include<stdio.h>
#include<stdlib.h>
void show(int n)
{
    int cube = n*n*n;
    printf("%d",cube);
}
int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    show(x);
    return 0;
}