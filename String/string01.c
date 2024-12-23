#include <stdio.h>
int main()
{ 
    char st[] = {'B', 'r', 'i', 'j', 'a', 'l', 'a', '\0'};   //same as char st[]={"Brijala"};
    for (int i = 0; i < 7; i++)
    {
        printf("the charater is %c\n", st[i]);
    }

    return 0;
}