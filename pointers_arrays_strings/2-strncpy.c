#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes to copy
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*src)
	{
		if (i >= n)
			break;

		dest[i++] = *src;
		src++;
	}

	return (dest);
}
