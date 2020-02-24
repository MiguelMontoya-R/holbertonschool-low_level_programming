#include "holberton.h"
/**
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
	
	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	
	return (s);
}
