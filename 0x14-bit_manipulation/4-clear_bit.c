#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = (1 << index);

	if (n == NULL)
		return (-1);

	*n = ~*n;
	*n = *n | x;
	*n = ~*n;

	return (1);
}
