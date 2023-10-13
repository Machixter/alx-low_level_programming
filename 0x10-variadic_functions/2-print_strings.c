#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings passed to function
 * @separator: , character
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list(arg);

	va_start(arg, n);

	for (x = 0 ; x < n ; x++)
	{
		str = va_arg(arg, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg);
}
