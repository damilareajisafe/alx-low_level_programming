#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the int array
 * @n: number of elements in @a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *ptr = a;
	int copy[n] = {1, 2, 3};
	int i, j = n - 1;

	for (i = 0; *(ptr + i) != '\0'; i++)
		*(copy + i) = *(ptr + i);

	while (j >= 0)
	{
		*ptr++ = *(copy + j);
		j--;
	}

	*ptr = '\0';
}
