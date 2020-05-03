#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sumatory of all linked list's data
 * @head: pointer to doubly linked list's head
 * Return: the sumatory or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int result = 0;

	if (head == NULL)
		return (0);
	while (aux)
	{
		result += aux->n;
		aux = aux->next;
	}
	return (result);
}
