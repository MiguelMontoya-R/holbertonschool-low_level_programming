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
	dog_t *new_dog;
	int lname, lowner;

	lname = strlen(name);
	lowner = strlen(owner);
	new_dog = malloc(sizeof(dog_t));


	if (new_dog)
	{

		(*new_dog).name = malloc(sizeof(lname));
		(*new_dog).age = age;
		(*new_dog).owner = malloc(sizeof(lowner));
		return (new_dog);
	}
	return (NULL);
}
