#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *array_range - create an array of integers
 *
 *@min: minimun value
 *@max: maximun value
 *Return: if fails NULL, otherwise pointer to int
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
