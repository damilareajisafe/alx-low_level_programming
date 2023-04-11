#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with @c
 * @c: char to be initialized
 * @size: size of array to be created
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size * sizeof(char));
	if (size == 0)
		return NULL;

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
