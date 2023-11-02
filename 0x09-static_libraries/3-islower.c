#include "main.h"
/**
 * _islower - function that chaecks for lowercase characters
 * @c: parameter that is to be checked
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
