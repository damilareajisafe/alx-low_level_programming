#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: eventual copy of src
 * @src: the string to be copied
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length += 1;
		*(dest + i) = *(src + i);

	}
	return (dest);
}
