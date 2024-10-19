#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ID;
    float units,bill;
    printf("enter customer id");
    scanf("%d",&ID);
    printf("enter units consumed");
    scanf("%f",&units);
    if (units<=199)
    {
        bill=1.20*units;
        if(bill<100)
        {
            bill=100;
         printf("id=%d bill=%.2f",ID,bill);   
        }
        else
        printf("id=%d bill=%.2f",ID,bill);
    }
    else if (200<=units && units<400)
    {
        bill=(1.20*199)+(1.50*(units-199));
        if(bill>400)
        {
            printf("id=%d bill=%.2f",ID,bill+0.15*bill);
        }
        else
            printf("id=%d bill=%.2f",ID,bill);
    }
    else if (400<=units && units<600)
    {
        bill=(1.20*199)+(1.50*200)+1.80*(units-399);
        printf("id=%d bill=%.2f",ID,bill+0.15*bill);
    }
    else if (600<=units)
    {
         bill=(1.20*199)+(1.50*200)+(1.80*200)+2.00*(units-599);
         printf("id=%d bill=%.2f",ID,bill+0.15*bill);
    }  
    return 0;


}