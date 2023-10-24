#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns length of string
 * @s:  string to evaluate
 *
 * Return: len of str
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * _strcpy - copies the str pointed to by src + '\0' to buffer
 * pointed to by dest
 * @dest: pointer to buffer dest of str
 * @src: str to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, len;
	
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0 ; x < len ; x++)
	{
		dest[x] = src[x];

		dest[x] = '\0';
	}

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog if succes else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_1, len_2;

	len_1 = _strlen(name);
	len_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_2 + 1));
	
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;


	return (dog);
}
