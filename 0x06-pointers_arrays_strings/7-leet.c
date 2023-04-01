#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string to be encoded
 * Return: pointer to @str
 */

char *leet(char *str)
{
	int i, j;

	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(x + j) != '\0'; j++)
		{
			if (*(str + i) == *(x + j))
				*(str + i) = *(y + j);
		}
	}

	return (str);
}
