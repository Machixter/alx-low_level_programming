#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

		my_dog.name = "Rex";
		my_dog.age = 2;
		my_dog.owner = "Machi";
		print_dog(&my_dog);

		return (0);
}
