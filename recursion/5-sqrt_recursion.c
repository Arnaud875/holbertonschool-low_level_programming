#include "main.h"

/**
 * _sqtr_helper - Helper function to calculate the square root
 * @n: The number
 * @g: The current guess
 * Return: The square root of the number
 */
int _sqtr_helper(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (_sqtr_helper(n, g + 1));
}

/**
 * _sqrt_recursion - Calculate the square root of a number
 * @n: The number
 * Return: The square root of the number, or -1 if n
 * does not hava a nural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqtr_helper(n, 0));
}
