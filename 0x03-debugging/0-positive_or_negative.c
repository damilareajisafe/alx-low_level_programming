#include <stdlib.h>
#include "main.h"
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * positive_or_negative - determine if n is positive or negative
 *
 * @n: the number
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
}
