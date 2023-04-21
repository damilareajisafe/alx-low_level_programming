#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int b;
	float c;
	char *d;
	va_list args;
	int n = 0;

	while (format[i])
	{
		n += 1;
		i++;
	}

	if (format != NULL)
	{
		va_start(args, format);
		i = 0;
		while (i < n)
		{
			if (i != 0)
				printf(", ");

			if (format[i] == 'c')
			{
				b = va_arg(args, int);
				printf("%c", b);
			}
			else if (format[i] == 'i')
			{
				b = va_arg(args, int);
				printf("%d", b);
			}
			else if (format[i] == 'f')
			{
				c = va_arg(args, double);
				printf("%f", c);
			}
			else if (format[i] == 's')
			{
				d = va_arg(args, char*);
				printf("%s", d);
			}
			i++;
		}
		va_end(args);
		printf("\n");
	}
}
