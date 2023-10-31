#include "main.h"
/**
 * _strdup - returns pointer to newly allocated space in memory 
 * @str: str cpd
 * Return: pointer to be duplicated
 */
char *_strdup(char *str)
{
	char *dup;
	int x, y;

	if (str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	dup = malloc(sizeof(char) * (1 + x));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (y = 0 ; str[y] ; y++)
	{
		dup[y] = str[y];
	}
	return (dup);
}
