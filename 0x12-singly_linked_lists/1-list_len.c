#include <stdio.h>
#include "lists.h"
/**
 * list_len - calculate the len of the list
 * @h: pointer to created linked list
 * Return: counter or number of elements
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
