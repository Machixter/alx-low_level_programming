#include "function_pointers.h"

/**
 * int_index - function searches for an int in ar   ray
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: element in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0 ; x < size ; x++)
	{
		if (cmp(array[x]) == 1)
		{
			return (x);
		}
	}
	return (-1);
}
