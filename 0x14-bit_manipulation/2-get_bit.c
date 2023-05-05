#include "main.h"

/**
 * get_bit - determines the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = (1 << index);

	if ((n ^ x) == (n - x))
		return (1);
	else
		return (0);
}
