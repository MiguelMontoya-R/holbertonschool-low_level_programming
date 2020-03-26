#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of binary
 * Return: 0 if b NULL or the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (i < len)
	{
		dec <<= 1;
		dec += b[i] - '0';
		i++;

	}
	return (dec);
}
