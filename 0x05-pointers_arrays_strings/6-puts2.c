#include "holberton.h"
/**
  *puts2 - print integers odds
  *
  *@str
  *Return: void
  */
void puts2(char *str)
{
	int somenums = 0;

	while (str[somenums] != '\0')
	{
		if (str[somenums] % 2 == 0)
		{ 
		_putchar(str[somenums]);
		}
		somenums++;
	}
	_putchar('\n');
}
