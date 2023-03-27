#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i += 1)
		;

	while (i >= 0)
	{
		_putchar(s[i]);
		i -= 1;
	}
	_putchar('\n');
}
