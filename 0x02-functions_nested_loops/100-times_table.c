#include "holberton.h"
/**
 * print_times_table - prints n times table
 * @n: number of times to print the times table
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j = 0, result = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (result >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result / 100 + '0');
				_putchar(((result % 100) / 10) + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
