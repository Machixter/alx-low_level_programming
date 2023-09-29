#include "main.h"
/**
 * _isdigit - checks for digits
 *
 * @c:function parameter
 *
 * Return: c
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
