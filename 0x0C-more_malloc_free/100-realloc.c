#include "main.h"

/**
 * _realloc - reallocates memory block using free and malloc
 * @ptr: pointer to old size
 * @old_size: mem size
 * @new_size: mem size
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int x;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (x = 0 ; x < old_size ; x++)
		{
			new_ptr[x] = ((char *)ptr)[x];
		}
	}
	else
	{
		for (x = 0 ; x < new_size ; x++)
		{
			new_ptr[x] = ((char *)ptr)[x];
		}
	}
	free(ptr);
	return (new_ptr);
}
