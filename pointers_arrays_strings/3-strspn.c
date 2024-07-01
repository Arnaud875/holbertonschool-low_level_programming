#include "main.h"

/**
 * _strspn - Returns the number of characters without in the string
 * @s: the string
 * @accept: string that containes the characters to search for
 * Return: test
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, l = 0, r = 0;

	while (accept[i++])
		l++;

	while (*s)
	{
		for (i = 0; i < l; i++)
		{
			if (*s == accept[i])
			{
				r++;
				break;
			}
		}

		s++;

		if (i == l)
			break;
	}

	return (r);
}
