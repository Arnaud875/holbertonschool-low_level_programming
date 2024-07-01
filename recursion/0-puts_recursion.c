#include "main.h"

/**
 * _puts_recursion - Print the string with recursion
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}