#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *malloc_checked - allocates memory using malloc function
 *
 *@b: accept unsigned int to allocate the correct amount of space
 *Return: 98 if it fails but always should continue and returns the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
