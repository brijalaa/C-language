#include<stdio.h>

float force(float mass){
return mass*9.8;}
int main(){
 float mass=3;
    float force= mass*9.8;
    printf("The force on body of mass %.2f kg is %.2fm N\n", mass,  force);
    
return 0;
}