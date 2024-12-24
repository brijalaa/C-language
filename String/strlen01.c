#include<stdio.h>
int strln(char str[]);

int strln(char str[]){
int x=0;
while (str[x]!='\0') 
{
   x++;
}
printf("%d", x);
return x;
}
int main(){
char st[]={"my name is brijala"};
strln(st);



return 0;
}