#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to list's head
 * @n: number to be added
 * Return: the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new_node_end;

	new_node_end = malloc(sizeof(dlistint_t)); /* Allocating memory for node */
	if (new_node_end == NULL)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;
	if (*head == NULL)
		*head = new_node_end;
	else
	{
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = new_node_end;
	}
	return (new_node_end);
}
