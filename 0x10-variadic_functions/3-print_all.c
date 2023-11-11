#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format of character to be printed
 * Return: anyting
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char c;
	int i;
	float f;
	char *s;
	const char * temp_format = format;

	va_start(arg, format);
	while (*temp_format)
	{
		if (*temp_format == 'c')
		{
			c = va_arg(arg, int);
			printf("%c, ", c);
		}
		else if (*temp_format == 'i')
		{
			i = va_arg(arg, int);
			printf("%d, ", i);
		}
		else if (*temp_format == 'f')
		{
			f = va_arg(arg, double);
			printf("%f, ", f);
		}
		else if (*temp_format == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		temp_format++;
	}
	va_end(arg);
	printf("\n");
}
