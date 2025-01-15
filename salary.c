#include<stdio.h>
int main()
{
    float n,salary;
    scanf("%f",&n);
    if(n<=2000)
        salary=n+0.3*n;
    else if(n>2000 && n<=5000)
        salary=n+0.5*n;
    else if(n>5000 && n<=10000)
        salary=n+0.7*n;
    else 
        salary=n+1*n;
    printf("%.2f",salary);
    return 0;
}