#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: destination of bytes
 * @b: constant byte
 * @n: number of bytes
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		s[x] = b;
	}
	return (s);
}
