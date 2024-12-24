#include<stdio.h>

char* slice(char str[],int m,int n);
char* slice(char str[],int m,int n){
char* ptr1=&str[m];
char* ptr2=&str[n];
str=ptr1;
str[n]='\0';
return str;

}
int main(){
char st[]={"my name is brijala"};
slice(st,1,6);
printf("%s", slice(st,1,6));
return 0;
}