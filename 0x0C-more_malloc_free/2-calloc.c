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
	int i;
	void *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int)nmemb; i++)
		*((int *)p + 1) = 0;
	return (p);
}
