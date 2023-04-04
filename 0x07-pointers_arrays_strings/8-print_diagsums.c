#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i/* j = size - 1*/;
	int ldiagsum = 0, rdiagsum = 0;

	for (i = 0; i < size; i++)
	{
		ldiagsum += a[i];
		rdiagsum += a[i];
	}

	printf("%d, %d\n", ldiagsum, rdiagsum);
}
