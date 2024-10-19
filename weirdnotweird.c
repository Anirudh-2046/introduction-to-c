#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("enter number");
    scanf("%d",&n);
    if ( n%2==0)
    {
      if( 2<=n && n<=5  || n>20)
      {
      printf("not weird");
      }
      if ( 6<=n && n<=20)
      {
      printf("weird");
      }
    }
    else
    printf("weird");
    return 0;
    
}