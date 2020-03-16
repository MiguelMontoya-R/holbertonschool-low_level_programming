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
	unsigned int j = 0;
	unsigned int n = 0;

	while (name[i])
		i++;
	while (owner[j])
		j++;
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	(*nd).name = malloc(sizeof(char) * (i + 1));
	if ((*nd).name == NULL)
	{
		free(nd);
		return (NULL);
	}
	(*nd).owner = malloc(sizeof(char) * (j + 1));
	if ((*nd).owner == NULL)
	{
		free((*nd).name);
		free(nd);
		return (NULL);
	}
	(*nd).age = age;
	while (name[n])
	{
		(*nd).name[n] = name[n];
		n++;
	}
	(*nd).name[n] = '\0';
	n = 0;
	while (owner[n])
	{
		(*nd).owner[n] = owner[n];
		n++;
	}
	(*nd).owner[n] = '\0';
	return (nd);
}
