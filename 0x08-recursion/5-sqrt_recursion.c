#include "main.h"
/**
 * _sqrt_recursion - returns natural sqrt of a num
 * @n: base nnum of natural sqrt
 * Return: square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}
/**
 * square_root - finds natural qrt of a number
 * @n: base number of sqrt
 * @res: sqrt
 * Return: result of sqrt
 */
int square_root(int n, int res)
{
	if (res * res > n)
	{
		return (-1);
	}
	else if (res * res == n)
	{
		return (res);
	}
	else
	{
		return (square_root(n, res + 1));
	}
}
