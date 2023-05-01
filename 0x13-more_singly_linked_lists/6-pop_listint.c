#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: address of the pointer to the head node
 * Return: the head node's data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *p;

	if (*head == NULL)
		return (0);

	p = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = p;

	return (data);
}
