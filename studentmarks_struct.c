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
    printf("Roll no.=%d\n",s1.rollno);
    printf("Name=%s\n",s1.name);
    printf("Total Marks=%d\n",s1.total);
    return 0;
}