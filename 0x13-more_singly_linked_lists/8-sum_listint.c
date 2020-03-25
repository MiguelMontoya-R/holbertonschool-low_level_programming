#include "lists.h"
/**
 * sum_listint - sum all list
 * @head: pointer to list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += (*tmp).n; /* sum the data copied in tmp */
		tmp = (*tmp).next; /*point tmp to the next node */
	}
	return (sum);
}
