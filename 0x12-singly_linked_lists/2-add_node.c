#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - add a node to the list
 * @head: pointer to head of list
 * @str: pointer to string
 * Return: pointer to new nod
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int counter = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	if (str)
	{
		do {
			counter++;
		} while (str[counter]);
	}

	node->len = counter;
	node->next = *head;
	node->str = strdup(str);
	*head = node;

	return (node);
}
