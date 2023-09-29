#include "main.h"
#include <string.h>
/**
 * _strcmp - function that compares two strings
 * @s1: pointer one to array of type char
 * @s2: pointer two to array of type char
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		if (s1[x] != s2[x])
		{
			if (s1[x] < s2[x])
			{
				return (s1[x] - s2[x]);
			}
			else if (s2[x] < s1[x])
			{
				return (s1[x] - s2[x]);
			}
		}
	}
	return (0);
}
