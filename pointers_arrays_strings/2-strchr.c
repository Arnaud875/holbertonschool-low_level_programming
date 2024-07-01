#include "main.h"

/**
 * _strchr - Returns a first occurrence of character
 * @s: the string
 * @c: the character
 * Return: the first occurrence
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	if (s == NULL)
		return (NULL);

	while (*p)
	{
		if (*p == c)
			return (p);

		p++;
	}

	return (NULL);
}
