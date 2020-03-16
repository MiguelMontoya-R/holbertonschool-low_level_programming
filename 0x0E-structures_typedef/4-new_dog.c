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

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	(*nd).name = malloc(sizeof(char) * strlen(name) + 1);
	if ((*nd).name == NULL)
	{
		free(nd);
		return (NULL);
	}
	(*nd).owner = malloc(sizeof(char) * strlen(name) + 1);
	if ((*nd).owner == NULL)
	{
		free((*nd).name);
		free(nd);
		return (NULL);
	}
	(*nd).age = age;

	while (name[i])
	{
		(*nd).name[i] = name[i];
		i++;
	}
	(*nd).name[i] = '\0';
	i = 0;
	while (owner[i])
	{
		(*nd).owner[i] = owner[i];
		i++;
	}
	(*nd).owner[i] = '\0';
	return (nd);
}
