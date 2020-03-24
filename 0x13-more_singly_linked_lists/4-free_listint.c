#include "lists.h"
/**
 * free_listint - free dynamic memory
 * @head: pointer to allocated memory
 * Retur: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = (*head).next;
		free(tmp);
	}
}
