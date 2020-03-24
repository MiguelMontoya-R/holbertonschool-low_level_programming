#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index - get the linked list "nth" node
 * @head: pointer to linkes list's head
 * @index: n position of node to index
 * Return: the "nth" node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);

		i++;
		tmp = (*tmp).next;
	}
	assert (0);
}
