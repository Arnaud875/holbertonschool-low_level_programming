#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;
	char a;

	i = 0;
	j = 0;

	while (s[i++])
		j++;

	for (i = j - 1; i >= j / 2; i--)
	{
		a = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = a;
	}
}
