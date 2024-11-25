#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    system("cls");
    char str[200];
    printf("enter string:");
    gets(str);
    int findex,lindex,len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            findex=i;
            break;
        }
    }                           
    for(int i=len-1;i>=0;i--)
    {
        if(str[i]!=' ')
        {
            lindex=i;
            break;
        }
    }
    int word=0;
    for(int i=findex; i<lindex;i++)
    {
        if(str[i]==' ' && str[i-1]!=' ') 
        word++;
    }
    printf("number of words=%d\n",word+1);
    return 0;
}