#include "holberton.h"
/**
 *_puts_recursion - function to recursively print all string using putchar that
 * just admit 1 character
 *
 *@s: pointer to the string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}

	else
	{
	_putchar('\n');
	}
}
