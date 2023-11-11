#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be separated btwn numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int x;
	int num;

	va_start(arg, n);
	for (x = 0 ; x < n ; x++)
	{
		num = va_arg(arg, int);
		printf("%d", num);

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");

}
