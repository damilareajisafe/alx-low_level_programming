#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string
 * Return: pointer to @str.
 */

char *string_toupper(char *str)
{
	int i;
	char *p = str;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) <= 'z' || *(p + i) >= 'a')
			*(p + i) = *(p + i) - 32;
		else
			*(p + i) = *(p + i);
	}

	return (str);
}
