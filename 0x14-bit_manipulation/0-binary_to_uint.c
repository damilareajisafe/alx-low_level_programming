#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if any character is not 1 0r 0, or @b is
 * NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = 0;
	int i, pow;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;

	pow = len - 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			dec += (b[i] - '0') * (1 << pow);
			pow--;
		}
		else
			return (0);
	}

	return (dec);
}
