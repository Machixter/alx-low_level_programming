#include "main.h"
#include <stdio.h>

/**
 * print_rev - funtion
 * @s: function parameter
 *
 * Return: string in reverse
 *
 */
void print_rev(char *s)
{
	int i;

	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		counter++;
	}
	for (i = counter - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
