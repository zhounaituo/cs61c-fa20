#include <stdio.h>

/**
 * Exercise 1-4. Write a program 
 * to print the corresponding Celsius to Fahrenheit table.
 * 
 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius to Fahrenheit table\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 * celsius) / 5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}