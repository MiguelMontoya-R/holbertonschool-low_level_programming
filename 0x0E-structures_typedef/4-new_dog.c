#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	unsigned int i = 0;
	(void)owner;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	(*nd).name = malloc(strlen(name) + 1);
	if ((*nd).name == NULL)
	{
		free((*nd).name);
	}
	(*nd).owner = malloc(strlen(name) + 1);
	if ((*nd).owner == NULL)
	{
		free((*nd).name);
		free(nd);
	}
	(*nd).age = age;

	while (i < strlen(name))
	{
		(*nd).name[i] = name[i];
		i++;
	}
	i = 0;
	while (i < strlen(owner))
	{
		(*nd).owner[i] = owner[i];
		i++;
	}
	return (nd);
}
