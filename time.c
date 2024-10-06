#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int ms,m,s,hr;
    printf("enter the time in milli seconds");
    scanf("%d",&ms);
    hr=ms/3600000;
    ms=ms%3600000;
    m=ms/60000;
    ms=ms%60000;
    s=ms/1000;
    printf("Hours=%d\nMinutes=%d\nSeconds=%d",hr,m,s);
    return 0;

}