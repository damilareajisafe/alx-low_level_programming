#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints every element of @array
 * @array: an int array
 * @size: size of @array
 * @action: pointer to the function to print @array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
