#include <stdio.h>
int main()
{
    int multiple_of_5[10];
    for (int i = 0; i < 10; i++)
    {
        multiple_of_5[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5X%d=%d\n", i, multiple_of_5[i]);
    }

    return 0;
}