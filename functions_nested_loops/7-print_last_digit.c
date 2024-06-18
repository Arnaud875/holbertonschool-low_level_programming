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

if (a < 0)
	a = abs(a);

_putchar('0' + a);
return (a);
}
