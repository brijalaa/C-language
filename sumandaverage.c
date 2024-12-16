#include <stdio.h>
void sna(int *a, int *b);

void sna(int *a, int *b)
{
    int sum;
    float avg;
    sum = *a + *b;
    avg = (*a + *b) / 2;
    printf("the sum ids %d and the average is %.2f \n", sum, avg);
}
int main()
{
    int x = 2, y = 2;
    sna(&x, &y);

    return 0;
}