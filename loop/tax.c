#include <stdio.h>

int main()
{
    int income; 
    float tax=0;
    printf("Enter income: \n");
        scanf("%d", &income);
    if (income <= 250000)
        tax=0;
    else if (income > 250000 && income <= 500000)
        tax= 0.05*(income-250000);
    else if (income > 500000 && income <= 1000000)
        tax= 0.2*(500000-250000)+0.05*(income-250000);
    else 
       tax=0.3*(1000000-500000)+0.2*(500000-250000)+0.05*(income-250000);
       
printf("you tax is %f", tax);
 return 0;
}