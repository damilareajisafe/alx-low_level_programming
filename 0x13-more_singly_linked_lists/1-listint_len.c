#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculates the number of elements in a linked listint_t list
 * @h: pointer to the first node in the list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
