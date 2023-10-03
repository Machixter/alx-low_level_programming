#include "main.h"

/**
 * create_array - creates array of char and initalizes it with specific char
 * @size: function argument
 * @c: character
 * Return: pointer to array
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
