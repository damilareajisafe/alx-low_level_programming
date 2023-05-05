#include "main.h"

/**
 * flip_bits - determines the number of bits you would need to get from one
 * number to another
 * @n: number 1
 * @m: number 2
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int r, count = 0;

	while (x > 0)
	{
		r = x - 2 * (x >> 1);
		if (r == 1)
			count += 1;
		x = x >> 1;
	}

	return (count);
}
