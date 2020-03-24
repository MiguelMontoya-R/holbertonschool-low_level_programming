#include "lists.h"
/**
 * get_nodeint_at_index - get the linked list "nth" node
 * @head: pointer to linkes list's head
 * @index: n position of node to index
 * Return: the "nth" node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* counter */
	listint_t *tmp = head; /* create tmp pointer */

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp); /* finding the match with the index */

		i++;
		tmp = (*tmp).next;
	}
	return (0);
}
