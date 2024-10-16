#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system ("cls");
    float r,l,b,s;
    int choice;
    printf("Press 1 for Area of circle\n");
    printf("Press 2 for Area of square\n");
    printf("Press 3 for Area of rectangle\n");
    printf("Enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter radius");
        scanf("%f",&r);
        printf("area of circle=%f",3.14*r*r);

        case 2:
        printf("enter side");
        scanf("%f",&s);
        printf("area of square=%f",s*s);

        case 3:
        printf("enter length and breadth");
        scanf("%f %f",&l,&b);
        printf("area of rectangle=%f",l*b);

        default:
        printf("Invalid!!!");
    }
    return 0;
}