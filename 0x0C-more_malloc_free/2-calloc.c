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
	unsigned int x;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);/*allocate memory using malloc*/

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0 ; x < nmemb * size ; x++)/*set allocated mem to 0*/
	{
		*((char *)ptr + 1) = 0;
	}
	free(ptr);
	return (ptr);
}
