#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
int a;

for (a = 0; a <= 9; a++)
{
putchar(48 + a);
if (a < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
