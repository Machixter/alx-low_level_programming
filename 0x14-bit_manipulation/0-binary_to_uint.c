#include "main.h"
/**
 * binary_to_uint - converts ninary str to unsigned int
 * @b: pointer to str
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *ptr;

	if (b == NULL)
	{
		return (0);
	}
	ptr = b;

	while (*ptr)
	{
		if ((*ptr - '0') <= 1)
		{
			result = (result << 1) | (*ptr - '0');
			ptr++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
