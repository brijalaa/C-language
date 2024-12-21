// to count no. of positive integer is array
#include <stdio.h>
int count(int a[], int n);
int count(int a[], int n)
{
    int positiveno = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            positiveno++;
        }
    }
    return positiveno; //return after loop is finished
}

int main()
{
    int marks[] = {45, 52, -333, 24, 85};

    printf("the  no of positive interger is %d ", count(marks, 5));

    return 0;
}