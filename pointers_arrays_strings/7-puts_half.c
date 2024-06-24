#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	l = 0;

	while (str[i++])
		l++;

	for (i = (l / 2); i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
