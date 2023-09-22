#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: array with string
 * Return: str
 */
char *string_toupper(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
