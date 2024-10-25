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
    int p=1;
    for(int i=1;i<=d;i++)
    {
        p*=10;
    }
    fd=n/p;
    int r=n%p;
    n=ld*p*10+r*10+fd;
    printf("swapped no.=%d",n);
    
    return 0;
}