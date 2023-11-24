#include "main.h"
/**
 * print_binary - prints binary digits
 * @n: no to be printed
 * Return: none
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int max = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	max = n;
	while (max > 0)
	{
		if ((n & max) == 0)
			_putchar('0');
		else
		{
			_putchar('1');
		}
		max >>= 1;
	}
}
