#include <stdio.h>
/**
  *main - prints the alphabet in lowercase except 'q' and 'e'
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		if (alpha == 101 || alpha == 71)
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar(10);
	return (0);
}
