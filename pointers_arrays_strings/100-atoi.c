#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			i = 0;
			while (*s >= '0' && *s <= '9')
			{
				i = (i * 10) + (*s - '0');
				s++;
			}
			return (i);
		}

		s++;
	}

	return (0);
}
