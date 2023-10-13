#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg;

	va_start(arg, format);

	int x;
	int num;
	char c;
	float f;
	char *s;

	while (format[x] != '\0')
	{
		if (format[x] == 'c')
		{
			c = va_arg(arg, int);
			printf("%c", c);
		}
		else if (format[x] == 'f')
		{
			f = va_arg(arg, double);
			printf("%f", f);
		}
		else if (format[x] == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else if (format[x] == 'i')
		{
			num = va_arg(arg, int);
			printf("%d", num);
		}
		x++;
	}
	va_end(arg);
	printf("\n");
}
