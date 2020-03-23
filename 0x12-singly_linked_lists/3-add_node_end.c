#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - add node at the list's end
 * @head: pointer to list's head
 * @str: pointer to string
 * Return: new node at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *n_node, *aux;


	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	while (str[counter])
		counter++;

	n_node->str = strdup(str);
	n_node->len = counter;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;

		aux->next = n_node;
	}
	return (n_node);
}
