#include "main.h"

/**
 * factorial - Get the factorial of given number
 * @n: number
 * Return: The factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
