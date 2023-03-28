#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		length += 1;

	while (length - 1 >= 0)
	{
		_putchar(*(s + length));
		length -= 1;
	}
	_putchar('\n');
}
