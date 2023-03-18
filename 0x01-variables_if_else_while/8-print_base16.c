#include <stdio.h>

/**
  *main - prints all the numbers of base 16 in lowercase
  *
  *Return: 0 (Success)
  */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	num = 0;

	while (num < 6)
	{
		putchar('a' + num);
		num++;
	}

	putchar('\n');
	return (0);
}
