#include "main.h"

/**
 * _strchr - Returns a first occurrence of character
 * @s: the string
 * @c: the character
 * Return: the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == NULL)
		return (NULL);

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
