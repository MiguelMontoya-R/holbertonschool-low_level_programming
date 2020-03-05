#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_calloc - allocate memory space and set to zero
 *
 *@nmemb: elements of the array
 *@size: sizes in bytes each element
 *Return: NULL if fails, and pointer if success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
