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
    int count=0;
    char str[100];
    fscanf(fp,"%c",str);
    
    fprintf(fp,"\nnumber of characters in file is %d",count);
    fclose(fp);
    return 0;
}