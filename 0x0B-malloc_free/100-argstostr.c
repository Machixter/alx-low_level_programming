#include "main.h"
/**
 * counter - count num of words in a str
 * @s: string
 * Return: count of words
 *
 */
int counter(char *s)
{
	int count = 0;
	int ins_word = 0;
	char *tkn;

	while (tkn != NULL)
	{
		count++;
		tkn = strtok(NULL, " ");
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: string
 * Return: array of words else NULL 
 *
 */
char **strtow(char *str)
{
	int words = counter(str);
	char **m, *tkn;
	int x;
	if (words == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	tkn = strtok(str, " ");
	x = 0;
	while (tkn != NULL)
	{
		m[x] = malloc(strlen(tkn) + 1);
		if (m[x] == NULL)
			return (NULL);
		strcpy(m[x], tkn);
		x++;
		tkn = strtok(NULL, " ");
	}
	m[x] = (NULL);

	return (m);
}
