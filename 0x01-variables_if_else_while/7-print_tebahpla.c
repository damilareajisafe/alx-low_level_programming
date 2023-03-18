#include <stdio.h>

/**
  *main - prints the lowercase alphabet in reverse
  *
  *Return: 0 (Success)
  */

int main(void)
{
	int num = 0;

	while (num < 26)
	{
		putchar('z' - num);
		num++;
	}

	putchar(10);
	return (0);
}
