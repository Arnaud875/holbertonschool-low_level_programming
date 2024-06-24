#include "main.h"

/**
 * swap_int - Swap a and b
 * @a: Pointer
 * @b: Pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *t;
	*t = *a;
	*a = *b;
	*b = *t;
}
