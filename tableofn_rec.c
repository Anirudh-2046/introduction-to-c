#include<stdio.h>
void table(int n)
{
    static int i=1;
    if(i<=10)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
        table(n);
    }
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    table(n);
    return 0;
}