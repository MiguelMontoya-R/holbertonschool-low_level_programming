#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_node - delete node
 * @head: doubly linked list
 * @delete: node to be deleted
 * Return: void
 */
void delete_node(dlistint_t **head, dlistint_t *delete)
{
	if (*head == NULL || delete == NULL)
		return;
	if (*head == delete)
		*head = delete->next;
	if (delete->next)
		delete->next->prev = delete->prev;
	if (delete->prev)
		delete->prev->next = delete->next;
	free(delete);
}
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

	if (*head == NULL)
		return (1);
	while (delete && counter < index)
	{
		delete = delete->next;
		counter++;
	}
	if (delete == NULL)
		return (-1);
	delete_node(head, delete);
	return (1);
}
