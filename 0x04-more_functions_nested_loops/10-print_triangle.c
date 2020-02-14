#include "holberton.h"
/**
  *print_triangle - print a triangle
  *
  *@size: size of the triangle
  *Return: void
  */
void print_triangle(int size)
{
	int i, j, h;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{

			for (j = size - i; j > 1; j--)
			{
				_putchar(' ');
			}

			for (h = 0; h < i + 1; h++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
