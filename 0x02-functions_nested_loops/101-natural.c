#include <stdio.h>
/**
 * main - print the summ of all multiples of 3 and 5
 * Return: void
 */
int main(void)
{
	int i = 0, result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
			result += i;
		else if (i % 5 == 0)
			result += i;
	}
	printf("%d\n", result);
	return (0);
}
