#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *p;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[len1 + i] = s2[i];

	p[len1 + i] = '\0';
	return (p);
}
