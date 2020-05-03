#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index(0,...)
 * @h: pointer to doubly linked list's head
 * @idx: index
 * @n: data
 * Return: the new_node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int counter = 0;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current && counter < idx - 1)
	{
		if (current->next == NULL)
				return (NULL);
		current = current->next;
		counter++;
	}
	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
