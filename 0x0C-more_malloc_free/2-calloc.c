#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of @nmemb elements of @size bytes
 * each and sets it to zero
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to allocated memory or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		if (size == sizeof(int))
			*((int *)p + i) = 0;
		else if (size == sizeof(char))
			*((char *)p + i) = 0;
		else if (size == sizeof(unsigned int))
			*((unsigned int *)p + i) = 0;
	}

	return ((void *)p);
}
