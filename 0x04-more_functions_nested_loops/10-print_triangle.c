#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: the size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');

	for (x = size; x >= 1 ; x--)
	{
		for (y = 1; y <= size; y++)
		{
			if (y >= x)
				_putchar('#');
			else
				_putchar(' ');
		}

		_putchar('\n');
	}
}
