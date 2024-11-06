#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int numbers[5];

    printf("enter 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        printf("enter numbers for index %d",i);
        scanf("%d",&numbers[i]);
    }

    printf("\nthe elements of the array are:\n");
    for(int i=0;i<5;i++)
    {
        printf("numbers[%d]=%d\n",i,numbers[i]);
    }
    return 0;
}