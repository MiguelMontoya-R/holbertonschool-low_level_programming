#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at given position
 * @head: pointer to the linked list
 * @index: Linked list's position to be deleted
 * Return: 1 success / -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux = *head; /* aux pointer to head */
	unsigned int i = 0; /* counter */
	listint_t *next; /* pointer to next node when needed */

	if (*head == NULL)
		return (-1); /* empty linked list */
	if (index == 0)
	{
		*head = aux->next; /* head point to next node copied in aux */
		free(aux); /* delete the old head a.k.a aux */
		return (1);
	}
	while (i < index - 1)
	{
		aux = aux->next; /* moving in the linked list 'til get at ... */
		i++; /*... the previous node (index - 1) */
		if (aux == NULL)
			return (-1); /* if index is greater than the list */
	}

	next = aux->next->next; /* move tmp->next to next node */
	free(aux->next); /* free the index list */

	aux->next = next;
	return (1);
}
