#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: doi or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = (char *) malloc(strlen(name) + 1);
	dog->owner = (char *) malloc(strlen(owner) + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);

	dog->age = age;
	return (dog);
}
