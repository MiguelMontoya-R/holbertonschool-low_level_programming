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

	if (str == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * (i + 1));

	while (str[i] != '\0')
	{
		i++;
	}

	if (p != NULL)
	{
		for (j = 0; j < i; j++)
		{
			p[j] = str[j];
		}
	}
	else if (p == NULL)
	{
		return (NULL);
	}

	return (p);
	free(p);
}
