#include <stdlib.h>
/**
 * print_name - print name
 * @name: name
¨* @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
