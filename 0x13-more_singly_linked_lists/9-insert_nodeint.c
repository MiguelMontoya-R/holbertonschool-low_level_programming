#include "lists.h"
/**
 * insert_nodeint_at_index - add a node at given index
 * @head: pointer to linked list
 * @idx: index
 * @n: data
 * Return: the address of new_node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	unsigned int counter = 0;
	while (tmp)
	{
		counter++;
		tmp = (*tmp).next;
	}
	if (idx > counter)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* allocate new node */

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n; /* set new_node */
	(*new_node).next = NULL;

	if (idx == 0)
	{
		(*new_node).next = *head;
		*head = new_node;
	}
	tmp = *head;
	counter = 0;
	while (counter < idx - 1)
	{
		counter++;
		tmp = (*tmp).next; /* going 'til index */
	}

	(*new_node).next = (*tmp).next; /* setting pointer to next node */
	(*tmp).next = new_node; /* setting pointer to new node */

	return (new_node);
}
