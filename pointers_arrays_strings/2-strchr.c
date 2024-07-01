#include "main.h"

/**
 * _strchr - Returns a first occurrence of character
 * @s: the string
 * @c: the character
 * Return: the first occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
