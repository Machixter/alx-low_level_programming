#include "variadic_functions.h"


/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of integers
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}
	for (x = 0 ; x < n ; x++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
