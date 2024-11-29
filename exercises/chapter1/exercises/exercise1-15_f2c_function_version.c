/**
 * @file exercise1-15_f2c_function_version.c
 * @author zhounaituo (zhounaituo@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 *
 * Exercise 1-15. Rewrite the temperature conversion program 
 * of Section 1.2 to use a function for conversion.
 */

#include <stdio.h>

double f2c(double fahr);

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	printf("Fahrenheit to Celsius\n");
	while (fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, f2c(fahr));
		fahr += step;
	}
}

double f2c(double fahr)
{
	return (5.0 / 9.0) * (fahr - 32.0);
}
