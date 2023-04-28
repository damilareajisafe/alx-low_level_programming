#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address to the pointer to the head node
 * @str: string
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0, i;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
