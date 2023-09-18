#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: function parameter
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i;
	char x;
	int counter = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counter++;
	for (i = 0 ; i < counter / 2 ; i++)
	{
		x = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = x;
	}
}
