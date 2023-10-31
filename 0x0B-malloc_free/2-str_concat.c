#include "main.h"
/**
 *
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int x;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0 ; s1[x] != '\0' ; x++)
		len1++;
	for (x = 0 ; s2[x] != '\0' ; x++)
		len2++;

	res = malloc(sizeof(char) * (len1 + len2 + 1));

	if (res == NULL)
		return (NULL);
	for (x = 0 ; s1[x] != '\0' ; x++)
	                res[x] = s1[x];
	for (x = 0 ; s2[x] != '\0' ; x++)
			res[len1 + x] = s2[x];
	return (res);

}
