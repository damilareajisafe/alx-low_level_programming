#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array of int to search from
 * @size: number of elements in @array
 * @cmp: pointer to the function to be used to compare values
 * Return: Returns the index of the first element for which the cmp function
 * does not return 0 or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
