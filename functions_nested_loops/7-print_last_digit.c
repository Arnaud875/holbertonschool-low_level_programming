#include "main.h"

/**
 * print_last_digit - y
 * @c: yes
 * Return: yes
 */
int print_last_digit(int c)
{
int a;
a = c % 10;

if (c < 0)
	c = abs(c);

_putchar('0' + c);
return (c);
}
