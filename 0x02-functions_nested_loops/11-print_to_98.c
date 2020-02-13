#include <stdio.h>
#include "holberton.h"

/**
  *print_to_98 - print the way numbers to 98
  *@n: number given by program
  */
void print_to_98(int n)
{
	int j;

	if (n <= 98)
	{
		for (j = n; j < 99; j++)
		{
			printf("%d", j);
			if (j == 98)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (j = n; j > 99; j--)
		{
			printf("%d", j);
			if (j == 98)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
