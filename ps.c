#include<stdio.h>
int main(){
    int i=43;
    int* ptr=&i;
       printf("the address of i is %u\n", &i);
    printf("the value of a is %d\n" ,*ptr);

return 0;
}