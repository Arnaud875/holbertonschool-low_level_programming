#include "main.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char a;

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	for (j = 0; j <= (i / 2) + 1; j++)
	{
		a = *((s - 1) - j);
		*((s - 1) - j) = *((s - i) + j);
		*((s - i) + j) = a;
	}
}
