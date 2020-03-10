#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog info
 * @d: pointer to dog info
 * Return: void
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else if ((*d).owner == NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
	else if (d == NULL)
	{
		printf("\n");
	}
	else if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
