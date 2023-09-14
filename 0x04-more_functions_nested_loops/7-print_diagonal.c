#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: function parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1 ; x < n ; x++)
		{
			for (y = 0 ; y <= x ; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		
	}
}
