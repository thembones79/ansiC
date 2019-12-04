#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius    Fahrenheight\n");

    while (celsius <= upper)
    
    {
        fahr = 32.0 + celsius * (9.0 / 5.0);
        printf("%7.0f %15.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}