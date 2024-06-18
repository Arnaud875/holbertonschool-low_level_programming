#include <stdio.h>
#include <string.h>

/**
 * main - y
 * Return: yes
 */
int main(void)
{
char a;
int b;

for (b = 0; b <= 9; b++)
{
putchar(48 + b);
}

for (a = 'a'; a <= 'f'; a++)
{
putchar(a);
}

putchar('\n');

return (0);
}
