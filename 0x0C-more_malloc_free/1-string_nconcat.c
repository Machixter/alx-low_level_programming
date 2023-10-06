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
	unsigned int t_len;
	unsigned int len1;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);

	len1 = strlen(s2);
	t_len = len1 + n;
	result = (char *) malloc((t_len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	result[t_len] = '\0';
	return (result);
}
