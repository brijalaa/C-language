#include <stdio.h>
int main()
{
    int arr[3][10];
    int mul[] = {2, 7, 9};
    for (int i = 0; i < 3; i++) // for rows
    {
        for (int j = 0; j < 10; j++) // for columns
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("multiplication table: %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d ", mul[i], j+1, arr[i][j]);
             printf("\n");
        }
       
    }

    return 0;
}