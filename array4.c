#include<stdio.h>
int main(){
    int number[]={23,23,45,66,78,90,78,45,10,45};
    int* ptr= number;
    printf("The number at address %u is %d\n", ptr+3, *(ptr+3));


return 0;
}