#include "main.h"

/**
 * _strchr - Returns a first occurrence of character
 * @s: the string
 * @c: the character
 * Return: the first occurrence
 */
char *_strchr(char *s, char c)
{
	int index;

	if (s == NULL)
		return (NULL);

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return (NULL);
}
