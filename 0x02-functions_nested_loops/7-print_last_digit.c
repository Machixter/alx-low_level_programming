#include "main.h"
#include<stdio.h>
/**
 * print_last_digit - gives last digit of a number
 *
 * @x: function parameter
 *
 * Return: x
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
		if (x < 0)
			y = -y;
	_putchar(y + '0');
	return (y);
}
