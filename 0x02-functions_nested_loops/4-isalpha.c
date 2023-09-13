#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: function parameter
 *
 * Return: c
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
