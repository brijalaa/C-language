#include <stdio.h>
float convert(float c)
{
    return (c * 9.0 / 5.0) + 32;
}

int main()
{
    float temprature_celcius = 23;
    float f = convert(temprature_celcius);
    printf("the temprature in farenheit is %f\n", f);

    return 0;
}