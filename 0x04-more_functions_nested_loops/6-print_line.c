#include "holberton.h"
/**
  *print_line - print _(line) n times
  *
  *@n: times lines is going to be printed
  *Return: void
  */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

