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
	unsigned int x, lens1 = 0, lens2 = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0 ; s1[x] != '\0' ; x++)
	{
		lens1++;
	}
	for (x = 0 ; s2[x] != '\0' ; x++)
	{
		lens2++;
	}
	result = malloc(sizeof(char) * (lens1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= lens2)
	{
		for (x = 0 ; s1[x] != '\0' ; x++)
			result[x] = s1[x];
		for (x = 0 ; s2[x] != '\0' ; x++)
			result[lens1 + x] = s2[x];
		result[lens1 + x] = '\0';
	}
	else
	{
		for (x = 0 ; s1[x] != '\0' ; x++)
			result[x] = s1[x];
		for (x = 0 ; s2[x] != '\0' ; x++)
			result[lens1 + x] = s2[x];
		result[lens1 + x] = '\0';
	}
	return (result);
}
