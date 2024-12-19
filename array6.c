#include<stdio.h>
int main(){
    
int multiples[10];
int a;
printf("Enter a number:\n");

scanf("%d",&a);
printf("Multiplicaton Table:\n");
for (int i = 0; i < 10; i++)
{
    multiples[i]=a*(i+1);
}
for (int i = 0; i < 10; i++)
{
  printf("%dX%d=%d\n",a,i,multiples[i]);
}
return 0;
}