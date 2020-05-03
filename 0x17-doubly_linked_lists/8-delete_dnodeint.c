#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head's list
 * @index: index to delete node
 * Return: 1 succed or -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head;
	unsigned int counter = 0;

	if (index == 0 && (*head)->next)
	{
		*head = (*head)->next;
		delete->next->prev = *head;
		free(delete);
		return (1);
	}
	else if (index == 0 && (*head)->next == NULL)
	{
		(*head)->next = NULL;
		return (1);
	}
	while (delete && counter < index)
	{
		if (delete->next->next == NULL && counter + 1 == index)
		{
			free(delete->next);
			delete->next = NULL;
			return (1);
		}
		else if (delete->next->next == NULL && counter + 1 != index)
			return (-1);
		delete = delete->next;
		counter++;
	}
	if (delete->next == NULL)
		return (-1);
	delete->prev->next = delete->next;
	delete->next->prev = delete->prev;
	free(delete);
	return (1);
}
