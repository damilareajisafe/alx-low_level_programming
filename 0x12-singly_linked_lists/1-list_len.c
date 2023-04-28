#include "lists.h"
#include <stdio.h>

/**
 * list_len - calculates the number of elements in a linked list_t list
 * @h: address to the head node
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	list_t *p = (list_t *)h;
	size_t count = 0;

	while (p != NULL)
	{
		p = p->next;
		count += 1;
	}

	return (count);
}
