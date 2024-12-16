#include <stdio.h>

void tentimes(int *s)
{
    *s = *s * 10;
}
int main()
{
    int x = 500;
    printf(" the value of x is %d\n", x);
    tentimes(&x);
    printf(" the value of x is %d\n", x);

    return 0;
}