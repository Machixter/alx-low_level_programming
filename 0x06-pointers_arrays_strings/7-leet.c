#include "main.h"
#include <string.h>
/**
 * *leet - function that encodes a string
 * @str: array with string
 *
 * Return: str
 */
char *leet(char *str)
{
	int x, y;
	char *list_1 = "aAeEoOtTlL";
	char *list_2 = "4433007711";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			if (str[x] == list_1[y])
			{
				str[x] = list_2[y];
			}
		}
	}
	return (str);
}
