#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
