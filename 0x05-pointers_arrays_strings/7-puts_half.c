#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0, i, n;

	for (i = 0; str[i] != '\0'; i++)
		length += 1;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length / 2) + 1;

	for (i = n; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
