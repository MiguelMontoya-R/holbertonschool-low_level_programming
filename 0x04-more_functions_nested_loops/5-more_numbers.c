#include "holberton.h"
/**
  *more_numbers - 10 times numbers from 0 to 14
  *
  *Return: void
  */
void more_numbers(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i % 10 + '0');

			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
		}
		_putchar('\n');
		
	}
}
