#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float radius , area ;
    printf("enter the value of radius");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of circle=%f",area);
    return 0;    
}