//cube of a number with no argument and no return type
#include<stdio.h>
#include<stdlib.h>
void show(void)
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int cube = n*n*n;
    printf("%d",cube);
}
int main()
{
    show();
    return 0;
}