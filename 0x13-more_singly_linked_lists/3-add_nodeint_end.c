#include "lists.h"
/**
 * add_nodeint_end - add node at the end of linked list
 * @head: pointer to head of linked list
 * @n: data or number
 * Return: NULL if it fail or the new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end, *aux;

	new_node_end = malloc(sizeof(listint_t));
	if (new_node_end == NULL)
		return (NULL);

	(*new_node_end).n = n;
	(*new_node_end).next = NULL;

	if (*head == NULL)
		*head = new_node_end;
	else
	{
		aux = *head;

		while ((*aux).next != NULL)
			aux = (*aux).next;

		(*aux).next = new_node_end;
	}
	return (new_node_end);
}
