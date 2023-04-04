#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the bytes to be searched for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = s;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(p + i) == *(accept + j))
				return (p + i);
		}
	}
	return ('\0');
}
