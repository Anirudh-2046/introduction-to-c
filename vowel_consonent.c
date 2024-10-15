#include<stdio.h>
#include<stdlib.h>
int  main()
{
    system("cls");
    char ch;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    if ( ch =='a' || ch =='A' ||  ch =='e' || ch =='E' ||  ch =='i' || ch =='I'  || ch=='o' ||  ch=='O' ||  ch=='u' ||  ch=='U' )
    printf("It is a vowel");
    else
    printf("It is a consonent");
    return 0;
}