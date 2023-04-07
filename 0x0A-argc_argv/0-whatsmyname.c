#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: length of @argv
 * @argv: an array of strings containing the CL arguments used to run
 * the program
 * Return: 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
