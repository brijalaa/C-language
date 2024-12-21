#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number:");
    scanf("%d %d %d",&a, &b,&c);
    int arr[3][10];
    int mul[] = {a, b, c};
    for (int i = 0; i < 3; i++) // for rows
    {
        for (int j = 0; j < 10; j++) // for columns
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("multiplication table of : %d\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d ", mul[i], j+1, arr[i][j]);
             printf("\n");
        }
       
    }

    return 0;
}