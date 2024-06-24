#include "main.h"

/**
 * print_square - prints a square
 * @s: size of the square
 * Return: void
 */
void print_square(int s)
{
	int i;

	for (i = 0; i < s; i++)
	{
		_putchar('#');
	}

	_putchar('\n');
}
