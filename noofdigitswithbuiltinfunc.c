#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int n;
    printf("enter n");
    scanf("%d",&n);
    int digits= (int)log10(n)+1;
    printf("no. of digits=%d",digits);
    return 0;
}