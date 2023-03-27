#includes "main.h"

/**
 * puts_half - prints half of the string
 * @str - string to print
 * return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 0)
	{
	k = j / 2;
	}
	else
	{
	k = (j - 1) / 2;
	}
	for (; k < j; k++)
	{
	putchar(str[k]);
	}
	putchar('\n');
}
