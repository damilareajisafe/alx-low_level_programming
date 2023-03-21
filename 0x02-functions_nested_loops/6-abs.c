#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the integer
 *
 * Return: unsigned value of n (Success)
 */
int _abs(int n)
{
	int num;

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		num = -(n);
		return (num);
	}
	else
	{
		return (0);
	}
}
