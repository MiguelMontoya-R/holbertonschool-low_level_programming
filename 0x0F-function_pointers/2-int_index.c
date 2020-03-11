#include <stdlib.h>
#include <stdio.h>
/**
 *
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
