#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp=fopen("data.txt","a+");
    if(fp==NULL){
        printf("file not found");
        exit(0);                      
    }
    char str[50];
    printf("Enter string:");
    scanf("%[^\n]*c",str);  //gets(str)
    strcat(str,"\n");
    fputs(str,fp);
    //reading 
    rewind(fp);
    char ch;
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}