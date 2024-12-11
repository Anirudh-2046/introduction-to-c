#include<stdio.h>
#include<string.h>
struct Student
{
    int rollno;
    char name[30];
    char branch[10];
    char section[10];
    float marks;
};
int main()
{
    struct Student s1;
    printf("Enter Roll Number:");
    scanf("%d",&s1.rollno);
    printf("Enter Name:");
    fflush(stdin);
    gets(s1.name);
    printf("Enter Branch:");
    gets(s1.branch);
    printf("Enter Section:");
    gets(s1.section);
    printf("Enter Marks:");
    scanf("%f",&s1.marks);

    printf("Roll no.=%d\n",s1.rollno);
    printf("Name=%s\n",s1.name);
    printf("Branch=%s\n",s1.branch);
    printf("Section=%s\n",s1.section);
    printf("Marks=%.2f\n",s1.marks);
    return 0;
}