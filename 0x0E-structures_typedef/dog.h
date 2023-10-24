#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - new type struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * @Description: new type of struct that holds info for a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new type for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
#endif
