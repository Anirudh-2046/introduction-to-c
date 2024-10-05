#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float celcius,farenhite;
    printf("enter the temperature in farenhite=");
    scanf("%f",&farenhite);
    celcius=(farenhite-32)*5/9;
    printf("temperature in celcius=%.2f",celcius);
    return 0;  
    
}