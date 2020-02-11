#include "holberton.h"
/**
 *print_alphabet_x10 - print the alphabet ten times
 *
 *
 * return - no need to return
 */

void print_alphabet_x10(void)
{
	int a, e;

	a = 0;
	while (a < 10)
	{
		e = 'a';
		while (e <= 'z')
		{
			_putchar(e);
			e++;
		}
		_putchar('\n');
		a++;
	}
}
