#include "main.h"

/**
 * array_range - creates array of integers
 * @min: lowest value
 * @max: highest value
 * Return: pointer to new array
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int x;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; min <= max ; x++)
	{
		arr[x] = min++;
	}
	return (arr);

}
