#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	return (i);
}
