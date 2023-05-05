#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	char buffer[100];
	int len = 0, i = 0;
	int r;

	if (n == 0)
		_putchar('0');

	while (n > 0)
	{
		r = n % 2;
		n = n / 2;
		buffer[i] = ('0' + r);
		i++;
	}
	buffer[i] = '\0';

	for (i = 0; buffer[i] != '\0'; i++)
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(buffer[i]);
}
