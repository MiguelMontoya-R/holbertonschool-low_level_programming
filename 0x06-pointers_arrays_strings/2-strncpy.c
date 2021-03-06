#include "holberton.h"
/**
  *_strncpy - copy a string
  *@dest: destination pointer to the copied variable
  *@src: pointer to the variable which is gonna be copied
  *@n: n bytes are going to be copied
  *Return: the value copied dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
