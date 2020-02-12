#include "holberton.h"
/**
 *print_last_digit - print last digit of n number
 *
 *@n: integer number
 *Return: the last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = (n * (-1) % 10);
	}
	else
	{
		l = (n % 10);
	}
	_putchar(l + '0');

	return (l);
}

