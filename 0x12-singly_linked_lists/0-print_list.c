#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: address to the first node in the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t head = *h;
	list_t *temp = &head;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			temp->len = 0;
			printf("[%u] %s\n", temp->len, "(nil)");
		}
		else
			printf("[%u] %s\n", temp->len, temp->str);

		temp = temp->next;
		count += 1;
	}
	return (count);
}
