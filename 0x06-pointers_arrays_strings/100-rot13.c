#include "main.h"
#include <string.h>
/**
 * *rot13 - function that encodes a string using rot13
 *
 * @str: array with string
 * Return: str
 */
char *rot13(char *str)
{
	int x, y;
	char *lst_1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *lst_2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (y = 0 ; lst_1[y] != '\0' ; y++)
		{
			if (str[x] == lst_1[y])
			{
				str[x] = lst_2[y];
				break;
			}
		}
	}
	return (str);
}
