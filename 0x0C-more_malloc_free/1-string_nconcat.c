#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to be copied from @s2
 * Return: pointer to newly allocated space in memory containing @s1 + n bytes
 * of @s2 or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int bytes, i, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if ((int)n >= len2)
		n = len2;
	bytes = len1 + n + 1;

	p = malloc(bytes * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < (int)n; i++)
		p[len1 + i] = s2[i];

	p[bytes - 1] = '\0';

	return (p);
}
