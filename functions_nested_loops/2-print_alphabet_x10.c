#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - y
 * Return: y
 */
void print_alphabet_x10(void)
{
char a;
int b;

for (b = 0; b < 10; b++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}

_putchar('\n');
}

}
