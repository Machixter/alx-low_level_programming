#include "main.h"
#include <string.h>

/**
 * _strncat - function that concantenates two strings
 * using n as no of bytes from src
 * @dest: destination string
 * @src: source string
 * @n: numberof bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dst_len = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
	{
		dst_len++;
	}
	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[dst_len + x] = *src;
		src++;
	}
	dest[dst_len + x] = '\0';
	return (dest);
}
