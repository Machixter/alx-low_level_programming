#include "main.h"
/**
 * set_bit - sets a bit at given index to 1
 * @index: index bit to be st to
 * @n: no to set bit into
 * Return: 1 or -1
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
	{
		return (-1);
	}
	*n |= max;
	return (1);
}
