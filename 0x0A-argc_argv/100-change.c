#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: length of @argv
 * @argv: an array of arguments of the program - here, contains the amount
 * to make change for
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int denoms[] = {25, 10, 5, 2, 1};
	int *p = denoms;
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change >= *p)
		{
			coins = coins + (change / *p);
			change = change % *p;
		}
		else
			p++;
	}

	printf("%d\n", coins);
	return (0);
}
