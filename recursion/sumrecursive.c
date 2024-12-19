#include <stdio.h>

int sum(int n);

int sum(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += i;
    }

    return total;
}
int main()
{
    int n = 14;
    printf("the sum is %d", sum(n));
    return 0;
}