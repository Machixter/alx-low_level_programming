#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to substring
 * @needle: pointer to string
 * Return: NULL or haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (haystack[x] == needle[x])
		{
			do
		{
				if (needle[x + 1] == '\0')
				{
					return (haystack);
				}
				x++;
		}
			while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
