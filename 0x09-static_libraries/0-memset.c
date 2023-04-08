#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area pointed to by s with
 * constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte to be filled in
 * @n: the number of bytes to be filled
 *
 * Return: pointer to @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
