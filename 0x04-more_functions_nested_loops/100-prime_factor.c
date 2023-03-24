#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the numner 612852475143
 * return: always 0 (success)
 */

int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 3; x <= square; x++)
	{
		if (number % x == 0)
	{
		maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}

