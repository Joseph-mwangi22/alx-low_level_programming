#include <unistd.h>
#include <stdio.h>

/**
 * print_numbers - print the numbers since 0 upto 9
 * @x: character to print
 * Return: the numbers since 0 upto 9
 */

int _putchar(char x)

{
        return (write(1, &x, 1));
}
