#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int d,y,m,w;
    printf("enter the number of days");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    m=d/30;
    d=d%30;
    w=d/7;
    printf("Years=%d\nMonths=%d\nWeeks=%d",y,m,w);
    return 0;

}