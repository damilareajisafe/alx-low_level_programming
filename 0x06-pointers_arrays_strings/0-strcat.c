#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}
