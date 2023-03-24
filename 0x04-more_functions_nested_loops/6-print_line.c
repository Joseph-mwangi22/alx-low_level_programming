#include "main.h"

/**
 * print_line - draws a straight line acccording to parameters
 * @n: the number of lines to draw
 * return: empty
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
