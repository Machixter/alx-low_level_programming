#include "main.h"

/**
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < size ; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
