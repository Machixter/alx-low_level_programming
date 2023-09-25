#include "main.h"

/**
 * _strpbrk - function that searches a string for sny set of byte
 * @s: string source
 * @accept: number of bytes
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *x = accept;

		while (*x != '\0')
		{
			if (*s == *x)
			{
				return (s);
			}
			x++;
		}
		s++;
	}
	return ('\0');
}
