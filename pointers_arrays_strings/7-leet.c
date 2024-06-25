#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, l, t;

	char table[][3] = {
		{ 'a', 'A', '4' },
		{ 'e', 'E', '3' },
		{ 'o', 'O', '0' },
		{ 't', 'T', '7' },
		{ 'l', 'L', '1' },
	};

	i = 0;
	l = 0;

	while (str[i++])
		l++;

	for (i = 0; i < l; i++)
	{
		for (t = 0; t < 5; t++)
		{
			if (str[i] == table[t][0] || str[i] == table[t][1])
				str[i] = table[t][2];
		}
	}

	return (str);
}
