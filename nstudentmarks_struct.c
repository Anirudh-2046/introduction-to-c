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
    int n,largest=0;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct Student stru[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter Roll Number:");
    scanf("%d",&stru[i].rollno);
    printf("Enter Name:");
    scanf("\n%[^\n]s",stru[i].name);                                         
    printf("Enter 5 subject marks:");
    stru[i].total=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&stru[i].marks[i]);
        stru[i].total+=stru[i].marks[i];
        if(largest<stru[i].marks[i])
        largest=stru[i].marks[i];
    }
    }
    for(int i=0;i<n;i++)
    {
    printf("Details of %d student\n",i+1);
    printf("Roll no.=%d Name=%s Total Marks=%d\n",stru[i].rollno,stru[i].name,stru[i].total);
    printf("%d",largest);
    }
    return 0;
}