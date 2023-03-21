#include <unistd.h>

/**
 * main - writes character c to stdout
 * @c: character to print
 * Return: 0n success 1
 * on error, -1 is returned and eerno set appropriate
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
