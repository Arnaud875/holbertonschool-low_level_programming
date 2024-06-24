#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int i, r;

	for (i = 0; i < n; i++)
	{
		printf("%d%s ", a[i], ((i < (n - 1)) ? ", " : ""));
	}

	printf("\n");
}
