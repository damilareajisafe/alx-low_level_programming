#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of ints passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, x;

	va_start(args, n);
	if (separator != NULL || n != 0)
	{
		for (i = 0; i < (int)n; i++)
		{
			x = va_arg(args, int);
			if (i != 0)
				printf("%s", separator);
			printf("%d", x);
		}
		va_end(args);
		printf("\n");
	}
}
