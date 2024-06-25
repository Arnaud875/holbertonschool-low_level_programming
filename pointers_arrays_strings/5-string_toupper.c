#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to string
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp -= 32;
		}
		temp++;
	}

	return (str);
}
