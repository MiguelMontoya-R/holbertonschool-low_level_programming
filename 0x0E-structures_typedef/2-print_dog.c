#include <stdio.h>
#include "dog.h"
/**
 *
 */
void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else if ((*d).owner == NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
	else if (d == NULL)
	{
	}
	else if (d)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
