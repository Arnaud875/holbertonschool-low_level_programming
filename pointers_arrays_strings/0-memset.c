#include "main.h"

/**
 * _memset - Set n bytes in s with n
 * @s: dest pointer
 * @b: Set value
 * @n: n bytes
 * Return: Dest pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == NULL)
		return (NULL);

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
