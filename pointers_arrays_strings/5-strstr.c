#include "main.h"

/**
 * _strstr - Find the first occurrence of substring
 * @haystack: The source
 * @needle: The substring
 * Return: Return the position of the first occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (needle[0] == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == needle[0] && *(haystack + 1) == needle[1])
		{
			for (i = 0; needle[i]; i++)
			{
				if (haystack[i] != needle[i])
					break;

				if (needle[i + 1] == '\0')
					return (haystack);
			}
		}

		haystack++;
	}

	return (NULL);
}
