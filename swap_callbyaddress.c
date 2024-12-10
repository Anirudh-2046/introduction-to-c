#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("After swapping a=%d\n",*a);
    printf("After swapping b=%d\n",*b);
}
int main()
{
    system("cls");
    int x,y;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    return 0;
}