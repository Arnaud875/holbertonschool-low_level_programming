#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * @dest: the destination string
 * @src: the string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*src)
	{
		dest[i++] = *src;
		src++;
	}

	return (dest);
}
