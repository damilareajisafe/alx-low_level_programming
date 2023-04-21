#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ele;
	va_list args;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < (int)n; i++)
		{
			if (i != 0)
				printf("%s", separator);
			ele = va_arg(args, char*);

			if (ele == NULL)
				printf("(nil)");
			else
				printf("%s", ele);
		}
		va_end(args);
		printf("\n");
	}
}
