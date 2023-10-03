#include "main.h"

/**
 * str_concat - function that concatenated tow strings
 * @s1: argument with string
 * @s2: argument with string
 * Return: pointer to new memory with s1 and s2 contents in order
 */

char *str_concat(char *s1, char *s2)
{
	int len_1 = 0;
	int len_2 = 0;
	int x, y;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/**Calculate the length of s1 and s2*/
	while (s1[len_1] != '\0')
	{
		len_1++;
	}
	while (s2[len_2] != '\0')
	{
		len_2++;
	}
	/**allocate memory for the concantenated string*/
	result = (char *) malloc((len_1 + len_2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	/**copy the contents of s1 and s2 to result*/
	for (x = 0 ; x < len_1 ; x++)
	{
		result[x] = s1[x];
	}
	for (y = 0 ; y < len_2 ; y++)
	{
		result[x + y] = s2[y];
	}
	/**NULL terminate the result*/
	result[x + y] = ('\0');
	return (result);
}
