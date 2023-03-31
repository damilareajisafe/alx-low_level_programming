#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the int array
 * @n: number of elements in @a
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *ptr = a;
	int size = n + 0;
	int new[size];
	int i/*, j = n - 1*/;

	for (i = 0; *(ptr + i) != '\0'; i++)
		*(new + i) = *(ptr + i);

	/*while (j >= 0)
	{
		*ptr++ = *(copy + j);
		j--;
	}*/
	for (i = 0; i < n; i++)
		printf("%d\n", new[i]);

	*ptr = '\0';
}
