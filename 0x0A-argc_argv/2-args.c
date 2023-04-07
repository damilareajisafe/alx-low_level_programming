#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments the program receives
 * @argc: size of @argv
 * @argv: array of arguments the program receives
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
