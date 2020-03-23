#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print all elements of linked list
 * @h: pointer to head
 * Return: void
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		counter++;
		h = (*h).next;
	}
	return (counter);
}
