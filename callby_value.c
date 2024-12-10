#include<stdio.h>
#include<stdlib.h>
void show(int a,int b)
{
    a=1000;
    b=2000;
    printf("%d  %d\n",a,b);
}
int main()
{
    int x=10,y=20;
    printf("%d  %d\n",x,y);
    show(x,y);
    printf("%d  %d\n",x,y);
    return 0;
}