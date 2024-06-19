#include "main.h"

/**
 * times_table - yes
 * Return: yes
 */
void times_table(void)
{
int i, j, r;

for (i = 0; i <= 9; i++)
{
_putchar('0');

for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');

r = i * j;

if (r <= 9)
{
_putchar(' ');
}
else
{
_putchar((r / 10) + '0');
}

_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
