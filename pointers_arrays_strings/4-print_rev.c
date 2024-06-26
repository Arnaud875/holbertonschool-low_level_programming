#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (j = 1; j <= i; j++)
	{
		_putchar(*(s - j));
	}

	_putchar('\n');
}
