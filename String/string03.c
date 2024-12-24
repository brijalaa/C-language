#include <stdio.h>
int main()
{
    char st[8];
    scanf("%s", st); // No for loop is needed because %s processes the entire string in one go.

    printf("%s", st);
    return 0;
}