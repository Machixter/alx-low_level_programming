#include "main.h"

/**
 * _pow_recursion - returns value of x^y
 * @x:function parameters
 * @y:function parameters
 * Return: x**y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x *_pow_recursion(x, (y - 1)));
	return (0);
}
