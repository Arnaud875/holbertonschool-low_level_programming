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

if (j != 0)
{
_putchar(' ');
if (r < 10)
{
_putchar(' ');
}
}

if (r > 9)
{
_putchar(r / 10 + '0');
}
else
{
_putchar(' ');
}
_putchar(r % 10 + '0');

if (j < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
