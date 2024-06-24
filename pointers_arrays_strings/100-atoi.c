#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int j;
	unsigned int i;

	i = 0;
	j = 1;

	while (*s)
	{
		if (*s == '-')
			j *= -1;

		if (*s >= '0' && *s <= '9')
		{
			i = 0;
			while (*s >= '0' && *s <= '9')
			{
				i = (i * 10) + (*s - '0');
				s++;
			}
			return (i * j);
		}

		s++;
	}

	return (0);
}
