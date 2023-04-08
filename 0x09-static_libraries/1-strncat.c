#include "main.h"
/**
 * _strncat - concatinates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the max number of bytes to be used from @src
 * Return: pointer to @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_src = 0;
	char *p = dest;
	int i = 0;

	while (*(src + i) != '\0')
	{
		length_src++;
		i++;
	}

	if (n > length_src)
		n = length_src;

	while (*p != '\0')
		p++;

	for (i = 0; i < n; i++)
		*(p + i) = *(src + i);

	return (dest);
}
