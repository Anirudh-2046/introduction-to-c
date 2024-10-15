#include<stdio.h>
#include<stdlib.h>
int  main()
{
    system("cls");
    char; 
    printf("enter ch");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    printf("it is a alphabet");
    else if(ch>=48 && ch<=57)
    printf("it is a number");
    else
    printf("it is a symbol");
    return 0;
}