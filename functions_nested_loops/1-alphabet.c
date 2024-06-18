#include <stdio.h>
#include <unistd.h>

void print_alphabet(void);

/**
 * print_alphabet - y
 * Return: v
 */
void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}

putchar('\n');
}
