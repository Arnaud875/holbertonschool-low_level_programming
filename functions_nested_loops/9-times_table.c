#include "main.h"

/**
 * times_table - yes
 * Return: yes
 */
void times_table(void)
{
int i, j, r;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
r = (i * j);
if (r > 9)
{
_putchar(r / 10 + '0');
}
_putchar(r % 10 + '0');

_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
