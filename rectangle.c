#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float lenght,breadth,area;
    printf("enter the value of lenght");
    scanf("%f",&lenght);
    printf("enter the value of breadth");
    scanf("%f",&breadth);
    area=lenght*breadth;
    printf("area=%f",area);
    return 0;
}