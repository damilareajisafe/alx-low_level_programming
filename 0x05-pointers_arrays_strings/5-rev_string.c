#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int i, j = 0, length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}


	printf("%s", temp);

	printf("%d", length);

	for (i = length - 1; i >= 0; i--)
	{
		s[j] = temp[i];
		putchar(s[j]);
		putchar('\n');
		putchar(temp[i]);
		putchar('\n');
		j += 1;
	}
}
