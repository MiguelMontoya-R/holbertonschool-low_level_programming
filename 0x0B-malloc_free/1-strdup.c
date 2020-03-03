#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - duplicate a string in another location
 *
 *@str: pointer to string
 *Return: NULL is there's any error and p pointer to new location of copied
 * string
 */
char *_strdup(char *str)
{
	int j;
	int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc(sizeof(*p) * (i + 1));

	if (p != NULL)
	{
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
		p[j] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (p);
}
