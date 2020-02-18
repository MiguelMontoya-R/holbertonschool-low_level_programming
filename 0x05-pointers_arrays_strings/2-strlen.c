#include "holberton.h"
/**
  *_strlen - string lenght
  *
  *@s: variable of the string
  *Return: the length of the variathe length of the variable valuee
  */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}

	return (counter);
}
