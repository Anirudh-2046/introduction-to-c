#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float a,b,c,d,e,total,percentage;
    printf("Enter the numbers of five subjects-");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=total/5;
    printf("Total marks=%f\nPercentage=%f",total,percentage);
    return 0;
    
}