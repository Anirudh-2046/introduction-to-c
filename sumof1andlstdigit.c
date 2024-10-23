#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int n,ld,fd;
    printf("enter n");
    scanf("%d",&n);
    int d=(int)log10(n);
    ld=n%10;
    fd=n/pow(10,d);
    printf("sum of 1st and last digit of %d is %d",n,ld+fd);
    return 0;
}