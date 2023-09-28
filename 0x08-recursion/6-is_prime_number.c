#include "main.h"

/**
 * prime_ass - assists to get prime number
 * @n: argument
 * @x: argument
 * Return: 0 or 1
 */
int prime_ass(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (prime_ass(n, x - 1));
	}
}
/**
 * is_prime_number - returns 1 if integer is a prime number
 * @n: function parameter
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (1);
	}
	else
	{
		return (prime_ass(n, n / 2));
	}
}
