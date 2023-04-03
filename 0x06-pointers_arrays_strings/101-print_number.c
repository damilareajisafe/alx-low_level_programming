#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 * Return: void.
 */

void print_number(int n)
{
	int rem = n;

	while (rem > 10)
		rem = print_first_digit(rem);

	_putchar('0' + rem);
}

/**
 * print_first_digit - prints first digit of an integer
 * @num: the integer
 * Return: the first digit.
 */
int print_first_digit(int num)
{
	int x = num, place_value = 1, remainder;

	while (x > 10)
	{
		x = x / 10;
		place_value *= 10;
	}

	remainder = num - (x * place_value);
	_putchar('0' + x);

	if (remainder == 0)
	{
		while (place_value != 10)
		{
			place_value /= 10;
			_putchar('0' + remainder);
		}
	}

	return (remainder);
}
