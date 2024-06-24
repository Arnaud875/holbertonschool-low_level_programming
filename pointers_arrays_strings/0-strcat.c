#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
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
