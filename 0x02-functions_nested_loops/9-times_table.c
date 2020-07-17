#include "holberton.h"
/**
 * times_table
 */
void times_table(void)
{
	int i = 0, j = 0, result = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (j == 9 && result > 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (j == 9 && result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (j == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
			}
			else if (result > 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
