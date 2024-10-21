#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsus = ; floating-point version */
int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;    /* lower limit of temperature table */
    upper = 37;     /* upper limit */
    step = 1;      /* step size */
    
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
