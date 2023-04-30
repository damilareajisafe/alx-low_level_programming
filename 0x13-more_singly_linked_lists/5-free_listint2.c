#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: address of the pointer to the first node in the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while(*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
