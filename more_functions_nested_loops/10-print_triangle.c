#include "main.h"

/**
 * print_triangle - prints a triangle
 * @s: size of the triangle
 * Return: void
 */
void print_triangle(int s)
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
			if ((i + j) < (s - 1))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		_putchar('\n');
	}
}
