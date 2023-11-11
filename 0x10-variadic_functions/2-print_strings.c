#include "variadic_functions.h"
/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list arg;
	char *z;

	va_start(arg, n);
	for (x = 0 ; x < n ; x++)
	{
		z = va_arg(arg, char *);
		
		if (!z)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", z);
		}
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
