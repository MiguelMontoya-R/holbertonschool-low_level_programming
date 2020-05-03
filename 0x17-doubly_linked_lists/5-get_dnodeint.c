#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get nth of a doubly linked list
 * @head: pointer to list
 * @index: nth node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (current->next && counter < index)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		counter++;
	}
	return (current);
}
