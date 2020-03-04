#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *free_grid - free the malloc reseved space
 *@grid: grid we created
 *@height: height
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
