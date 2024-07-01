#include "main.h"

/**
 * _strspn - Returns the length of the initial segment of s which
 * consists entirely of characters in accept
 * @s: the string to be scanned
 * @accept: string containing the characters to match
 * Return: the number of characters in the initial segment of s
 * which consist only of characters from accept
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
