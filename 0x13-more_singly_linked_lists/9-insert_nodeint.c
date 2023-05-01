#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the pointer to the head node
 * @idx: index at which to insert the new node
 * @n: new node data
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *temp;
	listint_t *new = malloc(sizeof(size_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = p;
		*head = new;
		return (*head);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}

	temp = p->next;
	p->next = new;
	new->next = temp;

	return (new);
}
