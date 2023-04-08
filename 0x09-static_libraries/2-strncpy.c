#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: pointer to @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length_src = 0;
	int length_dest = 0;
	char *p = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		length_src++;
		i++;
	}

	for (i = 0; *(dest + i) != '\0'; i++)
		length_dest++;

	for (i = 0; i < n; i++)
	{
		if (i < length_src)
			*(p + i) = *(src + i);
		else
			*(p + i) = '\0';
	}
	return (dest);
}
