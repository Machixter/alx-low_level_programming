#include "main.h"

/**
 * print_diagsums - funtion that prints sum of two diagonals of a square matrix
 * @a: function parameter
 * @size: function parameter
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum_1 = 0, sum_2 = 0;

	for (x = 0 ; x < size ; x++)
	{
		sum_1 += a[x];
		a += size;
	}
	a -= size;
	for (x = 0 ; x < size ; x++)
	{
		sum_2 += a[x];
		a -= size;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
