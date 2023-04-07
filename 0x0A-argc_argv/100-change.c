#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
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
