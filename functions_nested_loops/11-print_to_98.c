#include "main.h"

/**
 * print_number - yes
 * @n: yes
 * Return: yes
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n > 9)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}

/**
 * print_to_98 - yes
 * @n: number
 * Return: yes
 */
void print_to_98(int n)
{
while (n != 98)
{
print_number(n);
_putchar(',');
_putchar(' ');
n += (n < 98) ? 1 : -1;
}
print_number(98);
_putchar('\n');
}
