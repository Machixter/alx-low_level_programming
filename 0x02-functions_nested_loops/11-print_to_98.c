#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from n to 98
 * @n: function parameter
 *
 * Return: x
 *
 */
void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = 0 ; x <= 98 ; x++)
		{
			printf("%i, ", x);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%i, ", x);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n ; x >= 98 ; x--)
		{
			printf("%i, ", x);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		for (x = n ; x == 98 ; x--)
		{
			printf("%i, ", x);
		}
		printf("\n");
	}
}
