#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_ckecked - allocates memory
 * @b: no of bytes of mem to allocate
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
