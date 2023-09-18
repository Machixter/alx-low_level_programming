#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half string
 * @str: function parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;
	int counter = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		counter++;
	}
	n = (counter - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
