#include "holberton.h"
/**
  *_strcpy - copy string
  *
  *@dest: destination variable
  *@src: source of variable
  *Return: char*
  */
char *_strcpy(char *dest, char *src)
{

	char *strcpy = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*strcpy += '\0';
	return (strcpy);
}




