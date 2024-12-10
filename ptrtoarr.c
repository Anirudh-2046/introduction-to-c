#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(arr+i));                // array itself is a pointers
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);                  // pointer to array;we can also access elements of array like this i[arr];
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}