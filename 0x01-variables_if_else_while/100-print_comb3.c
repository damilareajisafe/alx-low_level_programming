#include <stdio.h>

/**
  *main - prints all unique combinations of two digits
  *
  *Return: 0 (Success);
  */

int main(void)
{
	int i = 0, j = i + 1;

	while (i < 10)
	{
		while (j < 10 && j > i)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}

	putchar('\n');
	return (0);
}
