#include "main.h"
#include <stdio.h>
/**
 * main - print all the args content
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
