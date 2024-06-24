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

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
