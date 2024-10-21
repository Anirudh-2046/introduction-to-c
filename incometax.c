#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    float salary,old_tax,new_tax;
    printf("enter the annual salary");
    scanf("%f",&salary);
    if(salary<=250000)
    {
        printf("Nil Nil");
    }
    else if(250000<salary && salary<=500000)
    {
        old_tax=0.05*(salary-250000);
        new_tax=0.05*(salary-250000);
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
    else if(500000<salary && salary<=750000)
    {
        old_tax=(0.05*250000)+(0.20*(salary-500000));
        new_tax=(0.05*250000)+(0.10*(salary-500000));
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
    else if(750000<salary && salary<1000000)
    {
        old_tax=12500+50000+(0.20*(salary-750000));
        new_tax=(0.05*250000)+(0.10*250000)+(0.15*(salary-750000));
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
    else if(1000000<=salary && salary<=1250000)
    {
        old_tax=(0.05*250000)+(0.20*500000)+(0.30*(salary-1000000));
        new_tax=(0.05*250000)+(0.10*250000)+(0.15*250000)+(0.20*(salary-1000000));
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
    else if(1250000<salary && salary<=1500000)
    {
        old_tax=(0.05*250000)+(0.20*500000)+(0.30*(salary-1000000));
        new_tax=(0.05*250000)+(0.10*250000)+(0.15*250000)+(0.20*250000)+(0.25*(salary-1250000));
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
    else if(1500000<salary)
    {
        old_tax=(0.05*250000)+(0.20*500000)+(0.30*(salary-1000000));
        new_tax=(0.05*250000)+(0.10*250000)+(0.15*250000)+(0.20*250000)+(0.25*250000)+(0.30*(salary-1500000));
        printf("old tax=%f new tax=%f",old_tax,new_tax);
    }
}