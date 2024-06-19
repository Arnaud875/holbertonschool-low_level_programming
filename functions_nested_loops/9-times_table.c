#include "main."

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
putchar(' ');
if (r < 10)
{
putchar(' ');
}
}

if (r > 9)
{
putchar(r / 10 + '0');
}
else
{
putchar(' ');
}
putchar(r % 10 + '0');

if (j < 9)
{
putchar(',');
}
}
putchar('\n');
}
}
