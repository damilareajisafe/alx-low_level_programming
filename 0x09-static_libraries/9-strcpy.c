#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: eventual copy of src
 * @src: the string to be copied
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';
	return (dest);
}
