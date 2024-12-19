#include<stdio.h>


float aveg(int a,int b) {
    return (a+b)/2.0; 
} 
int main(){
    int x=3;
    int y=4;
    float result= aveg(x,y);
    printf("the average is%.2f\n", result);

return 0;
}