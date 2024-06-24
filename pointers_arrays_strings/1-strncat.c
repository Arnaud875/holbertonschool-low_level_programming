#include "main.h"

/**
 * _strncat - concatenates two strings with n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	i = 0;
	l = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			while (*src)
			{
				if (l >= n)
					break;

				dest[i + l] = *src;
				l++;
				src++;
			}
			break;
		}

		i++;
	}

	return (dest);
}
