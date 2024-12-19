#include<stdio.h>
int main(){
 int marks[5];
 printf("Enter marks of 5 students");
 for (int i = 0; i < 5; i++)
 {
    scanf("%d", &marks[i]);
 }
 printf("marks of 5 students are is %d,%d,%d,%d,%d,", marks[0],marks[1],marks[2],marks[3],marks[4]);
return 0;
}