#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, i, n;
	int a, b;

	for (i = 0; *(s1 + i) != '\0'; i++)
		s1len++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		s2len++;

	if (s1len < s2len)
		n = s1len;
	else
		n = s2len;

	for (i = 0; i < n; i++)
	{
		a = *(s1 + i);
		b = *(s2 + i);
		if (a < b || a > b)
			return (a - b);
	}
	return (0);
}
