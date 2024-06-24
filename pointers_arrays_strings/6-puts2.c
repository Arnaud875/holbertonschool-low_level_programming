#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: string to print
 * Return: 0
 */
void puts2(char *s)
{
	int i, l = 0;

	while (s[i++])
		l++;

	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}

	_putchar('\n');
}
