#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *
 */
char *_strdup(char *str)
{
	int j;
	int i = 0;
	char *p;

	p = malloc(sizeof(*p) * i);

	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}

		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
	}

	return (p);
	free(p);
}
