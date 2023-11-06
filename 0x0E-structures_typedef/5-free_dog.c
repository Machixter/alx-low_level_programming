#include "dog.h"
/**
 * free_dog - function that frees dogs allocaed mem
 * @d: struct dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
