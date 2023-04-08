#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src to memory area @dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; (unsigned int) i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
