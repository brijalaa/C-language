#include<stdio.h>

#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    if( (year%4==0&& year%100!=0 || year%400==0))
    printf("The year is Leap year!!\n");
    else 
    printf("The year is not leap year\n");
    return 0;
}