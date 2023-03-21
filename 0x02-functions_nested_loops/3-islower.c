#include "main.h"

/**
 * _islower - checks if c is a lowercase character.
 *
 * @c: the character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
