#include "main.h"
/**
 *
 *
 */
int counter(char *s)
{
	int count = 0;
	char *tkn;

	tkn = strtok(s, " ");
	while (tkn != NULL)
	{
		count++;
		tkn = strtok(NULL, " ");
	}
	return (count);
}
/**
 *
 *
 */
char **strtow(char *str)
{
	int words;
	char **m;
	int x;
	char *tkn;

	words = counter(str);
	if (words == 0)
		return (NULL);
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
