#include "main.h"
#include <stdio.h>

/**
 * _puts - function
 * @str: function parameter
 * Return: prints string
 */

void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

