#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer string
 */
char *cap_string(char *str)
{
	int i, l, s, x;

	i = 0;
	l = 0;

	while (str[i++])
		l++;

	for (i = 0; i < l; i++)
	{
		s = i;

		for (x = i; x < l; x++)
		{
			if (str[x] == ' ' || str[x] == '\n' || str[x] == '\t' || str[x] == '.')
				break;
			i++;
		}

		if (str[s] >= 'a' && str[s] <= 'z')
			str[s] = str[s] - 32;
	}

	return (str);
}
