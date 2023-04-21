#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of its parameters
 * @n: num of parameters
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, ele, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		ele = va_arg(args, int);
		sum += ele;
	}
	va_end(args);

	return (sum);
}
