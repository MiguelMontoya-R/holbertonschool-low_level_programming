#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int number;
	int comma;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);

	if (number < '9')
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}

