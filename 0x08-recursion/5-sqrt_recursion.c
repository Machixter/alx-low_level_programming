#include "main.h"
/**
 * sqrt_ass - assists to get squareroot
 * @n:function parameter
 * @y:function parameter
 * Return: y
 */
int sqrt_ass(int n, int y)
{
	if (y * y > n)
	{
		return (-1);
	}
	else if (y * y == n)
	{
		return (y);
	}
	else
	{
		return (sqrt_ass(n, y + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square rot of given number
 * @n: given number
 * Return: 1 or -1 or square root of digit
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_ass(n, 1));
	}
}
