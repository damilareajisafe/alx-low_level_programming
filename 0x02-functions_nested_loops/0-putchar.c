#include "main.h"

/**
  * main - prints "_putchar"
  *
  * Return: Success (0).
  */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;
	char letter;

	while (str[i] != '\0')
	{
		letter = str[i];
		_putchar(letter);
		i++;
	}

	_putchar('\n');
}
