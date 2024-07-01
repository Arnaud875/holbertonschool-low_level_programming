#include "main.h"

/**
 * _memcpy - Copy n bytes from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes to copy
 * Return: Dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < (int)n; i++)
		dest[i] = src[i];

	return (dest);
}
