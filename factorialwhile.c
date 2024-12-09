#include <stdio.h>
int main()
{
    int i=1, n;
    long long factorial = 1; // long long is used for variables with large value.
    printf("enter n\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("There is no factorial of negative number\n");
    }
    else
    {
        while (i<=0)
        {
           factorial*=i;
           i++;
         
        }
           printf("n! is %lld\n", factorial);
    }

    return 0;
}