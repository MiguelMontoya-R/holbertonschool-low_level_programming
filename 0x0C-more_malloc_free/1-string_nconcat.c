#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *string_nconcat - concatenates two strings
 *
 *@s1: first string
 *@s2: second string
 *@n: first n bytes to be concatenated
 *Return: fails NULL or return the pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, add, w1, w2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		i++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	add = i + j;
	ptr = malloc(sizeof(ptr) * (add + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (w1 = 0; w1 < i; w1++)
	{
		ptr[w1] = s1[w1];
	}
	for (w2 = 0; w2 < n; w2++)
	{
		ptr[w1++] = s2[w2];
	}
	ptr[w1] = '\0';
	return (ptr);
}
