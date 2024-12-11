#include<stdio.h>
struct Student
{
    int rollno;
    char name[30];
    int marks[5];
    int total;
};
int main()
    {   
    struct Student s1;
    struct Student s2;
    printf("Enter Roll Number:");
    scanf("%d",&s1.rollno);
    printf("Enter Name:");
    scanf("\n%[^\n]s",s1.name);                                         
    printf("Enter 5 subject marks:");
    s1.total=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1.marks[i]);
        s1.total+=s1.marks[i];
    }

    printf("Enter Roll Number:");
    scanf("%d",&s2.rollno);
    printf("Enter Name:");
    scanf("\n%[^\n]s",s2.name);                                         
    printf("Enter 5 subject marks:");
    s2.total=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s2.marks[i]);
        s2.total+=s2.marks[i];
    }
    printf("Details of 1st student\n");
    printf("Roll no.=%d Name=%s Total Marks=%d\n",s1.rollno,s1.name,s1.total);
    printf("Details of 2nd student\n");
    printf("Roll no.=%d Name=%s Total Marks=%d\n",s2.rollno,s2.name,s2.total);
    return 0;
}