#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple arithmetic operations
 * @argc: size of @argv
 * @argv: contains the program's arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*p)(int, int);
	char operator = *argv[2];
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strchr("+-*%", operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(argv[2]);
	result = p(a, b);
	printf("%d\n", result);
	return (0);
}