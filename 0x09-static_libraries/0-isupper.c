#include "main.h"
#include<stdio.h>

/**
 * _isupper - function to check for uppercase character
 *
 * @c: function parameter
 *
 * Return: 1 || 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
