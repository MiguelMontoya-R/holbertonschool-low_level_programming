#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - converts decimal in binary
 * @n: decimal number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}
}
