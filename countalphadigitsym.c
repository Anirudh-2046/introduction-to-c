#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[30];
    int alpha=0,sym=0,digit=0;
    printf("enter string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=97 && str[i]<=122 || str[i]>=65 && str[i]<=90)
            alpha++;
        else if(str[i]>=48 && str[i]<=57)
            digit++;
        else
            sym++;
    }
    printf("number of alphabets=%d\n",alpha);
    printf("number of digits=%d\n",digit);
    printf("number of symbols=%d\n",sym);
    return 0;
}