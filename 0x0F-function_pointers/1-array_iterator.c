#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - makes every single element of the array execute called
 *                  function in main
 * @size: size of the array
 * @array: pointer to the array of integers
 * @action: pointer to function as parameter
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
