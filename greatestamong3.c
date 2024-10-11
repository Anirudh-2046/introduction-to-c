#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a,b,c;
    printf("Enter the 3 numbers=");
    scanf("%d %d %d",&a,&b,&c);    
    (a>b && a>c)? printf("%d is greater among 3",a) : (b>c)? printf("%d is greater among 3",b) : printf("%d is greater among 3",c);
    return 0;
}