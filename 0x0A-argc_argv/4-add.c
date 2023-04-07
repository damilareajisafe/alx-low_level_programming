#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds integers
 * @argc: length of @argv
 * @argv: array of arguments passed to the program
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
