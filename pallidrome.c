// if a reverse of a no is equal to the number is k/as pallidrome no.
#include<stdio.h>
#include<stdio.h>
int main()
{
    system("cls");
    int n,rev=0;
    printf("enter n");
    scanf("%d",&n);
    int num=n;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(num==rev)
    printf("no is pallidrome");
    else
    printf("no is not a pallidrome");
    return 0;
}