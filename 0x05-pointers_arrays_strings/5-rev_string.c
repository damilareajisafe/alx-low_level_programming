#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0, i, temp;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (length - 1) - i);
		*(s + (length - 1) - i) = temp;
	}
}
