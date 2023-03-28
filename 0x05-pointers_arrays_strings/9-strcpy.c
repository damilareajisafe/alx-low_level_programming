#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: eventual copy of src
 * @src: the string to be copied
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	return (dest);
}
