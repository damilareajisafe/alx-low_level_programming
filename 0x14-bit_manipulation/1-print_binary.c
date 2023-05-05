#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 1;

	if (n == 0)
		_putchar('0');

	while (n >= x)
		x = x * 2;

	while (x != 1)
	{
		x = x / 2;

		if (n >= x)
		{
			_putchar('1');
			n = n - x;
		}
		else
			_putchar('0');
	}
}
