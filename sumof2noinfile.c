#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("file not found");
        exit(0);
    }
    int x,y,sum;
    fscanf(fp,"%d %d",&x,&y);
    sum=x+y;
    fprintf(fp,"\nSum of %d and %d is %d",x,y,sum); 
    fclose(fp);
    return 0;
}