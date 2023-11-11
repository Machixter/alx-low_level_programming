#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameter of a program
 * @n: number of args
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (x = 0 ; x < n ; x++)
	{
		sum = va_arg(arg, int) + sum;
	}
	va_end(arg);
	return (sum);
}
