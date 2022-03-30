#include <stdio.h>

/**
 * main - prints Fahrenheit-Celcius table
 */

int main(void)
{
	float fahr, celcius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	fahr = lower;
	while (fahr <= upper)
	{
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.0f\n", fahr, celcius);
		fahr = fahr + step;
	}
}
