#include "holberton.h"
/**
 *
 */
int tmp(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	if (n < (i * i))
	{
		return (-1);
	}
	return (tmp(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (tmp(n, 1));
}
