#include<stdio.h>

int address( int* ptr){
printf("the address of ptr is %u\n", ptr);
printf("the value of ptr is %d\n", *ptr);
return 10;
}
int main(){
    int i =72;
    int* no=&i;
    printf("the adress of i is %u\n", &i);
    address(no);

return 0;
}