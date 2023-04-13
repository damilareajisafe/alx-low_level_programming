#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers whose content is arranged from
 * min to max
 * @min: smallest int
 * @max: largest int
 * Return: pointer to the newly created array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *p, i, length;

	if (min > max)
		return (NULL);
	length = max - min + 1;

	p = malloc(length * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		p[i] = min + i;

	return (p);
}
