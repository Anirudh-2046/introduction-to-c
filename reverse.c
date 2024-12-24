#include<stdio.h>
#include<string.h>
int main()
{
    int n,j=0;
    printf("size:");
    scanf("%d",&n);
    char str[n],rev[n];
    printf("enter string:");
    scanf("\n%[^\n]s",str);
    rev[n]=str[n];
    for(int i=strlen(str)-1;i>=0;i--,j++)
    {
       rev[j]=str[i];
    }
    rev[j]='\0';
    printf("%s ",rev);
    if(rev==str)
    printf("pallidrome");
    else
    printf("not pallidrome");
    return 0;
}