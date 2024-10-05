#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float base,height,area;
    printf("enter the value of base");
    scanf("%f",&base);
    printf("enter the value of height");
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area=%f",area);
    return 0;
}