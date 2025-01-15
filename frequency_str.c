#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("\n%[^\n]s",str);
    int count[1000]={0};
    for(int i=0;i<1000;i++)
    {
        for(int j=1;j<1000;j++)
        {
            if (strcmp(str[i],str[j])==0)
                count[j]++;            
        }
    }
    int max=0,smax=0;
    char ch='\0',sch='\0';

    for(int i=0;i<1000;i++)
    {
        if (count[i]>max)
        {
            smax=max;
            sch=ch;

            max=count[i];
            ch=str[i];
        }
        else if(count[i]>smax && count[i]<max)
        {
            smax=count[i];
            sch=str[i];
        }
    }

    if(smax>0)
    {
        printf("%c",sch);
    }
    else
    printf("NO");
    return 0;
}