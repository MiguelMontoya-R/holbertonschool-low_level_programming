#include "holberton.h"
/**
 * print_sign - print sign of n number
 * @n: variable of a int
 *
 * Return: 1 to positives, 0 to zero, and -1 to negatives
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
