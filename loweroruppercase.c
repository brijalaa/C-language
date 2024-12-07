// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>

int main()
{
    char ch = '%';
    printf("the ascii value of a %d", ch);
    if (ch <= 122 && ch >= 97)
        printf("the character is lowercase");
    else if (ch <= 90 && ch >= 65)
        printf("the character is uppercase");
    else
        printf("the characteris not an alphabet");
    return 0;
}