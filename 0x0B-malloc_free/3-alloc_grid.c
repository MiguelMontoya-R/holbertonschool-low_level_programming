#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - reserve the space for a grid
 *
 *@width: width of the array
 *@height: height of the array
 *Return: NULL if fails or the array[w][h]
 */
int **alloc_grid(int width, int height)
{
	int h = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		while (h < height)
		{
			array[h] = malloc(width * sizeof(int));
			if (array[h] == NULL)
			{
				while (h < height)
				{
					free (array[h]);
					      h++;
				}
				free (array);
				return (NULL);
			}
			h++;
		}
	}
	return (array);
}
