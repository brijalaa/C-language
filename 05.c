#include<stdio.h>

int main(){
    int r=6;
    int h=7;

    printf("the area of circle of radius %d is %f", r, 3.14*r*r);
    printf("\tthe area of circle of radius %d and height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}