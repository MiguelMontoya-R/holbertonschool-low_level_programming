#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize elements
 * @d: pointer to structure
 * @name: pointer to name
 * @age: float for age to be more precise
 * @owner: pointer to owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
