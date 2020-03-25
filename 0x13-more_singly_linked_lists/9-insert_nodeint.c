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

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* allocate new node */

	while (tmp)
	{
		if (counter == idx - 1)
		{
			new_node = tmp; /* now tmp points to tmp->next */
			(*new_node).n = n; /* copying data in new node */
			(*new_node).next = (*tmp).next; /* connecting to next*/
			return (new_node);
		}
		counter++;
		tmp = (*tmp).next;
	}
	return (new_node);
}
