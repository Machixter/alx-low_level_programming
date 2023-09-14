#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: function parameter
 * Return: 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
