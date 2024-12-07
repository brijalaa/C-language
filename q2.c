#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("enter marks1: \n");
    scanf("%d", &marks1);
    printf("enter marks2: \n");
    scanf("%d", &marks2);
    printf("enter marks3: \n");
    scanf("%d", &marks3);
    printf("your marks are %d, %d and %d", marks1, marks2, marks3);
    if(marks1<33||marks2<33||marks3<33)
    printf("you failed due to less marks in indivisual subjects\n");
    else if ((marks1+marks2+marks3)/3<40)
    printf("you failed due to less percentage\n");
    else
    printf("you have passed, congratulations!!!\n");
    return 0;
}