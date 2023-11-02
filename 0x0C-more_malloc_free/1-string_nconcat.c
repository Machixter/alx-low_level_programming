#include "main.h"
/**
 * string_nconcat - concantenates two strings
 * @s1: pointer to string
 * @s2: pointer to strng
 * @n: no of bytes
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, lens2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = strlen(s1);
	lens2 = strlen(s2);

	if (n >= lens2)
	{
		n = lens2;
	}
	result = malloc(lens1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, lens1);
	memcpy(result + lens1, s2, n);
	result[lens1 + n] = '\0';

	return (result);
}
