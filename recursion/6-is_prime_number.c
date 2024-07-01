#include "main.h"

/**
 * prime_helper - Check if a number is prime
 * @n: The number
 * @i: The current divisor
 * Return: 1 if n is a prime number, 0 no
 */
int prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number
 * Return: 1 if n is a prime, 0 no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
