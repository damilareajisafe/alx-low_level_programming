#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: number of bytes in the initial segment of @s which consists only
 * of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				length++;
				break;
			}
		}
		if (!(length > i))
			break;
	}

	return (length);
}
