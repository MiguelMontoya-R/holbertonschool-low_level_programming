#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *create_array - functions that creates an array
 *
 *@size: size of the array
 *@c: character
 *Return: NULL if size == 0 and return the pointer if is not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = malloc(size * sizeof(*array));
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	else
	{
		/*creating the array character by character*/
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (array);
}
