#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)   
    {
        printf("%dx%d = %d\n",n,i,i*n);
    } 
    return 0;
    
    
}