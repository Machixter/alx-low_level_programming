#include "main.h"

/**
 * _strdup - return a pointer to new allocated space containing copy of string
 * @str: function argument
 * Return: pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	int x;
	char *dup;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x <= len ; x++)
	{
		dup[x] = str[x];
	}
	return (dup);
	free(dup);
}
