#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    system("cls");
    float x1,x2,y1,y2,distance;
    printf("enter the first point of x-coordinate:");
    scanf("%f",&x1);
    printf("enter the second point of x-coordinate:");
    scanf("%f",&x2);
    printf("enter the first point of y-coordinate:");
    scanf("%f",&y1);
    printf("enter the second point of y-coordinate:");
    scanf("%f",&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Euclidean distance=%2f",distance);
    return 0;
    
}