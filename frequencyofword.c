#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],find[100];
    int count=0,i=0;
    gets(str);
    gets(find);
    int len = strlen(find);
    while(str[i]!='\0')
    {
        if(strncmp(&str[i],find,len)==0)
        {
            count++;
            i+=len;
        }
        else
        i++;
    }
    printf("%d",count);
    return 0;
}
