#include "main.h"
#include <string.h>
/**
 * reverse_array - function that reverses an array of integrers
 * @a: array of integers
 * @n: number of elemets to swap
 * Return: reverse_array
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0 ; x < n / 2 ; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
