#include <stdio.h>
int main()
{
    int i, n;
    long long factorial = 1; // long long is used for variables with large value.
    printf("enter n\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("There is no factorial of negative number\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("n!is %11d\n", factorial);
    }

    return 0;
}
