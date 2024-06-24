#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		a[i] = a[n - i - 1];
		i++;
	}
}
