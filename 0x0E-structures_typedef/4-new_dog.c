#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	return (new_dog);
}
