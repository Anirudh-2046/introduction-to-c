#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    float radius,area,per;
    printf("enter radius-");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    per=2*3.14*radius;
    printf("area of circle=%f\nPerimeter of circle=%f",area,per);
    
    int side,area1,per1;
    printf("\nenter side-");
    scanf("%d",&side);
    area1=side*side;
    per1=4*side;
    printf("area of square=%d\nPerimeter of square=%d",area1,per1);

    int length,breadth,area2,per2;
    printf("\nenter length and breadth-");
    scanf("%d%d",&length,&breadth);
    area2=length*breadth;
    per2=2*(length+breadth);
    printf("area of rectangle=%d\nPerimeter of rectangle=%d",area2,per2);
    return 0;

}