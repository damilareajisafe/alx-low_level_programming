#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer
 *
 * Return: 0 (Success)
 */
int _abs(int n)
{
	int num;

	if (n > 0)
	{
		_putchar(n);
	}
	else if (n < 0)
	{
		num = -(n);
		_putchar(num);
	}
	else
	{
		_putchar(0);
	}

	return (0);
}
