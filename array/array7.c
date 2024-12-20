#include <stdio.h>
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1]=temp;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
     printf("The Original array is:");
    print(arr, 6);
    reverse(arr, 6);
    printf("The Reversed array is:");
    print(arr, 6);

    return 0;
}