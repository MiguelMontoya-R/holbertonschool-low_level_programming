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
	int w = 0, h = 0;
	int **array;

	array = malloc(width * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}
	if (width <= 0)
	{
		return (NULL);
	}
	else
	{
		while (w < width)
		{
			array[w] = malloc(height * sizeof(int));
			if (array[w] == NULL)
			{
				return (NULL);
			}
			if (height <= 0)
			{
				return (NULL);
			}
			else
			{
				while (h < height)
				{
					h++;
				}
			}
			w++;
		}
	}
	return (array);
}
