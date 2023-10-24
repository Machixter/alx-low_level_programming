#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - variable initialization of type struct dog
 * @d: pointer to initialized struct
 * @name: name of the dog
 * @age: age og dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
