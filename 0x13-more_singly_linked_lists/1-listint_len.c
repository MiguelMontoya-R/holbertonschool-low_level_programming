#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - return the number of elements
 * @h: pointer to head of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
