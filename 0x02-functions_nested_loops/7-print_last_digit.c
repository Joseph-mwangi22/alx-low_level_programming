#include "main.h"

/**
 * print_last_digit - prints last digit of a num
 * @n: the number to be treated
 * Return; value of last digit of a num
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
