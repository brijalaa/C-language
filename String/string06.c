#include <stdio.h>
int main()
{
    char abc[8]; // 7 characters+null terminator

    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &abc[i]);
        fflush(stdin); // to clear the input buffer.When working with strings, fflush(stdin) is often used to clear unwanted input e.g., newline characters left in the buffer before accepting further input.
    }
    abc[7] = '\0';
    printf("%s", abc);

    return 0;
}