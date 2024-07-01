#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals
 * of a square matrix of integers.
 * @a: A square matrix of integers
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_left = 0, sum_right = 0;

	for (i = 0; i < size; i++)
	{
		sum_left += a[(i * size) + i];
		sum_right += a[(i * size) + ((size - 1) - i)];
	}

	printf("%d, %d\n", sum_left, sum_right);
}
