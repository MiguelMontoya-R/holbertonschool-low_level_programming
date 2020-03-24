#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free linked list
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = (*head).next;
		free((*aux).str);
		free(aux);
	}
}
