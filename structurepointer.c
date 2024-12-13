#include<stdio.h>
#include<stdlib.h>
struct book
{
    int id;
    char name[30];
    int price;
};
int main()
{
    struct book b1;
    struct book *ptr=&b1;
    printf("Enter book id:");
    scanf("%d",&ptr->id);
    printf("Enter book name:");
    scanf("\n%[^\n]s",ptr->name);
    printf("Enter book price:");
    scanf("%d",&ptr->price);

    printf("book id=%d\n",ptr->id);
    printf("book name=%s\n",ptr->name);
    printf("book price=%d\n",ptr->price);
    return 0;
}