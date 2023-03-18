#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 (Success);
 */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha += 1;
	}

	putchar(10);
	return (0);
}
