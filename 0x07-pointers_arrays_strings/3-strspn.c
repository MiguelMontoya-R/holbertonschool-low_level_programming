#include "holberton.h"
/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;
	unsigned int n = 0;

	while (s[j] != ',')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
		        if (accept[i] == s[j])
			{
				n++;
			}
		}
		j++;
	}
	return (n);
}
