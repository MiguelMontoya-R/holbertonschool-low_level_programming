#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free doubly linked list memory
 * @head: pointer to doubly linked list's head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	dlistint_t *next;

	if (head == NULL)
		return;

	while (aux)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
}
