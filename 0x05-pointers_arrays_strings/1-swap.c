#include "main.h"
#include <stdio.h>

/**
 * swap_init - function 
 *
 * @a:funtion parameter
 * @b:function parameter
 * Return: a and b swapped
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
