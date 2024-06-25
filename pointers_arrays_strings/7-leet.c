#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, l, t;
	char *temp;

	char table[][3] = {
		{ 'a', 'A', '4' },
		{ 'e', 'E', '3' },
		{ 'o', 'O', '0' },
		{ 't', 'T', '7' },
		{ 'l', 'L', '1' },
	};

	i = 0;
	l = 0;
	temp = str;

	while (*temp)
	{
		for (t = 0; t < 5; t++)
		{
			if (temp[i] == table[t][0] || temp[i] == table[t][1])
				temp[i] = table[t][2];
		}

		temp++;
	}

	return (str);
}
