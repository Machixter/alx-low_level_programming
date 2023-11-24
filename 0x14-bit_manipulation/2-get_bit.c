#include "main.h"
/**
 * get_bit - return value of bit at given indx
 * @n: bit
 * @index: index of bit
 * Return: bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
