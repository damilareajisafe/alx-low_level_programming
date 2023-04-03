#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 * Return: pointer to the first occurence of @c OR NULL (if @c isn't found)
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (p);
}
