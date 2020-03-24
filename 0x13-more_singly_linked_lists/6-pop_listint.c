#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 * Return: 0 if lists is empty or the data
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int n;

	if (head == NULL)
		return (0);

	n = (**head).n; /* Stor the head->n (data) in the var n */
	delete = *head; /* point to head */
	*head = (**head).next; /* head now point to next node */
	free(delete); /* free the node where delete is pointing */

	return (n);
}
