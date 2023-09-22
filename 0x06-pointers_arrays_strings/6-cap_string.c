#include "main.h"
#include <string.h>

/**
 * *cap_string - function that capitalizes all words of a string
 * @str: array with string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int x, y;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};
	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
		for (y = 0 ; y < 13 ; y++)
		{
			if (str[x] == sep[y])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
					str[x + 1] = str[x + 1] - 32;
			}
		}
	}
	return (str);
}
