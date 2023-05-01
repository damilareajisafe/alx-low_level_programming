#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @index: index of the node
 * Return: the nth node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	p = head;

	for (i = 0; i < index; i++)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}

	return (p);
}
