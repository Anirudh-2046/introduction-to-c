#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int n,i,even=0,odd=0;
    printf("\nenter the size of array:");
    scanf("%d",&n);
    int marks[n];
    printf("\nenter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
        if(marks[i]%2==0)
         even++;
        else
         odd++;
    }
    printf("no of even elements are %d",even);
    printf("number of odd elements are %d",odd);
    for( i=0;i<n;i++)
    {
       
        if(marks[i]%2==0)
        {
            printf("\neven %d ",marks[i]);
        }
    else
        {
            printf("\nodd %d ",marks[i]);
        }

    }
     
    return 0;
}