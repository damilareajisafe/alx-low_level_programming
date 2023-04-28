#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: address to the pointer to the head node
 * @str: string data to be added to a list_t
 * Return: address to the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));
	int len = 0, i;

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}
