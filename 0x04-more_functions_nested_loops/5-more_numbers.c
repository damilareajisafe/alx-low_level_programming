#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, ff by a new line
 *
 * Return: void function type
*/
void more_numbers(void)
{
	int x, y, z;

	for (z = 0; z < 10; z++)
	{
		for (x = 0; x < 10; x++)
		{
			for (y = 0; y < 10; y++)
			{
				if (x == 1)
					_putchar('0' + x);

				_putchar('0' + y);

				if  (x == 1 && y == 4)
				{
					_putchar('\n');
					break;
				}

			}
			if (x == 1)
				break;
		}
	}
}
