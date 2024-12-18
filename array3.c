#include<stdio.h>
int main(){
   int marks[]={45,52,333,24,85};
   int* ptr= &marks;
   for (int i = 0; i < 5; i++)
   {

     printf("the value at index %d is %d\n", i, *ptr);
     *ptr++;
   }
   
return 0;
}