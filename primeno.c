#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i=2,flag=0;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0)
    printf("prime no");
    else
    printf("not a prime");
 return 0;   
        
    
}