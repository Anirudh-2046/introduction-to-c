//cube of a number with no argument but return type
#include<stdio.h>
#include<stdlib.h>
int show(void)
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    return n*n*n;
}
int main()
{
    int cube=show();
    printf("%d",cube);
    return 0;
}