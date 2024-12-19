#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter up to which you want natural numbers :\n");
    scanf("%d", &n);
    do
    {
        printf("natural numbers %d\n", i);
        i++;
    } while (i <= n);
    return 0;
}