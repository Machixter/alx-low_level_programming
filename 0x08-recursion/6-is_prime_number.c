#include "main.h"
/**
 * is_prime_number - returns 1 if prime num else 0
 * @n: int
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, n - 1));
}
/**
 * prime_number - checks if num is prime
 * @x: int
 * @y: num
 * Return: 1 if prime else 0
 */
int prime_number(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	if (x % y == 0 && y > 0)
	{
		return (0);
	}
	return (prime_number(x, y - 1));
}
