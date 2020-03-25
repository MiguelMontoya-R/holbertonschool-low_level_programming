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
	listint_t *tmp = *head, *tmp1 = *head;
	unsigned int counter = 0, len = 0;
	while (tmp1)
	{
		len++;
		tmp1 = (*tmp1).next;
	}
	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* allocate new node */

	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n; /* set new_node */
	if (idx == 0)
		return (NULL);
	if (idx == 1)
	{
		(*new_node).next = *head;
		*head = new_node;
	}
	while (counter < idx - 1)
	{
		counter++;
		tmp = (*tmp).next; /* going 'til index */
	}

	(*new_node).next = (*tmp).next; /* setting pointer to next node */
	(*tmp).next = new_node; /* setting pointer to new node */

	return (new_node);
}
