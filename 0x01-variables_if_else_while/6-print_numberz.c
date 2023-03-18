#include <stdio.h>

/**
  *main - print all single digit numbers of base 10 starting from 0
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

	putchar(10);
	return (0);
}
