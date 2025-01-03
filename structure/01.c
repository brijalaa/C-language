#include <stdio.h>
#include <string.h>

struct empl
{
    int code;
    float salary;
    char name[10]
};

int main()
{
    struct empl e1;
    e1.salary = 45.33;
    strcpy(e1.name, "brijala");
    e1.code = 45;

    printf("%d %f %s", e1.code, e1.salary, e1.name);

    return 0;
}