#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - index of array that match
 * @array: array of numbers to match with
 * @size: size
 * @cmp: pointer to function
 *
 *Return: -1 if it fails or return the index where match were found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		if (cmp(array[i]) == '\0')
		{
			return (-1);
		}
	}
	return (-1);
}
