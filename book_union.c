#include<stdio.h>
#include<stdlib.h>
union book
{
    int id;
    char name[30];
    int price;
};
int main()
{
    union book b1;
    printf("Enter book id:");
    scanf("%d",&b1.id);
    printf("Enter book name:");
    scanf("\n%[^\n]s",b1.name);
    printf("Enter book price:");
    scanf("%d",&b1.price);

    printf("book id=%d\n",b1.id);
    printf("book name=%s\n",b1.name);
    printf("book price=%d\n",b1.price);
    return 0;
}