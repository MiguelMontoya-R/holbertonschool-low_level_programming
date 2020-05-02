#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - len of the linked list
 * @h: pointer to head of doubly linked list
 * Return: the lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t lenght = 0;

	while (tmp)
	{
		tmp = tmp->next;
		lenght++;
	}
	return (lenght);
}