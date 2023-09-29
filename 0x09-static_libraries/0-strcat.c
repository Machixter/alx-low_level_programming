#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source of string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dst_len = 0;
	int src_len = 0;
	int x;

	for (x = 0 ; src[x] != '\0' ; x++)
	{
		src_len++;
	}
	for (x = 0 ; dest[x] != '\0' ; x++)
	{
		dst_len++;
	}
	for (x = 0 ; x <= src_len ; x++)
	{
		dest[dst_len + x] = src[x];
	}
	return (dest);
}
