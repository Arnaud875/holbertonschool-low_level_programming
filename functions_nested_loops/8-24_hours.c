#include "main.h"

/**
 * jack_bauer - y
 * Return: y
 */
void jack_bauer(void)
{
int i;
int j;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(':');
putchar('0' + j / 10);
putchar('0' + j % 10);
putchar('\n');
}
}
}
