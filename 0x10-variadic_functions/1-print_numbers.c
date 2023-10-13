#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: pointer to , character
 * @n: number of intergers passed to function
 * Return: integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;

	va_start(arg, n);

	for (x = 0 ; x < n ; x++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (x != n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%d", va_arg(arg, int));
		}
	}
	va_end(arg);
	putchar('\n');
}
