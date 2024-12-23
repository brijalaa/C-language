#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = {"brijala"};
    char target[30];
    strcpy(target, st);
    printf("%s %s\n", target, st);
    char s1[] = {"Don"};
    strcat(st, s1);
    printf("%s ", st);
    int x = strcmp("xmas", "apple");
    printf("%d\n", x);

    return 0;
}