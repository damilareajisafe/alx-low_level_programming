#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a copy of @str and returns a pointer to a newly allocated
 * space in memory
 * @str: the string to be copied
 * Return: a pointer to the duplicated string or NULL if it fails
 */

char *_strdup(char *str)
{
	char *p;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	p = malloc(length * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	p[i] = '\0';
	return (p);
}
