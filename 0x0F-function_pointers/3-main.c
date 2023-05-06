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
	int a, b;
	int (*p)(int, int);
	char *operator;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	if ((*operator == '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	p = get_op_func(operator);

	if (p == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = p(a, b);
	printf("%d\n", result);
	return (0);
}
