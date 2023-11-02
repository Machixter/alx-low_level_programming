#include "main.h"

/**
 * _strchr - function that locates a charcter in a string
 * @s: pointer to string
 * @c: charcter c
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
