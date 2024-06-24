#include "main.h"

/**
 * print_square - prints a square
 * @s: size of the square
 * Return: void
 */
void print_square(int s)
{
	int i, j;

	if (s <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
