#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int uppercase = 65;
	int lowercase = 97;

	while (lowercase <= 122)
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 90)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar(10);
	return (0);
}
