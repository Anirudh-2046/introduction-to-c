#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("file not found");
        exit(0);                      
    }
    fseek(fp,10,SEEK_SET);
    char ch;
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}