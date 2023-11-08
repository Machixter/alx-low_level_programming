#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - ftn that exe a ftn given as param on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 * Return: array element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (x = 0 ; x < size ; x++)
	{
		action(array[x]);
	}
}
