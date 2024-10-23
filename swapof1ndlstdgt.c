#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    system("cls");
    int n,ld,fd;
    printf("enter n");
    scanf("%d",&n);
    ld=n%10;
    n=n/10;
    int d=(int)log10(n);
    fd=n/pow(10,d);
    int r=n%(int)pow(10,d);
    printf("swapped no.=%d%d%d",ld,r,fd);
    
    return 0;
}