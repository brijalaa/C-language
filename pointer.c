#include<stdio.h>
int main(){
int i=1232;
int* k= &i;
printf("the address of i is %p\n", &i);
printf("the address of i is %p\n", k);
return 0;
}