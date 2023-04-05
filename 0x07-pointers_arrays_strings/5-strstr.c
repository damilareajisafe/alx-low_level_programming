#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (needle[0] == *(haystack + i))
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) != *(haystack + i + j))
						return ('\0');
			}
			break;
		}
	}
	return (haystack + i);
}
