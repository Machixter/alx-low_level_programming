#include "main.h"
#include <stdio.h>

/**
 * _strlen - gets length of string in variable
 * @s : variable holding the string to be iterated through
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	return (count);
}
