#include<stdio.h>
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
    struct Student s1={1001,"Andy Smith","CSE","A1",89};
    printf("Roll Number=%d\n",s1.rollno);
    printf("Name=%s\n",s1.name);
    printf("Branch=%s\n",s1.branch);
    printf("Section=%s\n",s1.section);
    printf("Marks=%.2f\n",s1.marks);
    return 0;
}