#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array usin maloc
 * @nmemb: elements of array
 * @size: no of bytes of each
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);/*allocate memory using malloc*/

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
