#include "holberton.h"
/**
  *print_square - print a square
  *
  *@size: variable with the size of the square
  *Return: void
  */
void print_square(int size)
{
	int i, j;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
