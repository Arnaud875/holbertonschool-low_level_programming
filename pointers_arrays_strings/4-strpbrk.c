#include "main.h"

/**
 * _strpbrk - Find the first occurrence in the string s in the string accept
 * @s: The source string
 * @accept: Accept characters in the string
 * Return: Returns the first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		while (*ptr)
		{
			if (*s == *ptr)
				return (s);
			ptr++;
		}
		s++;
	}

	return (NULL);
}
