#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: address of the pointer of the head node
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = p->next;
		free(p);
		return (1);

	}

	for (i = 0; i < (index - 1); i++)
	{
		p = p->next;
		if (p == NULL)
			return (-1);
	}

	temp = p->next;
	p->next = temp->next;
	free(temp);

	return (1);
}
