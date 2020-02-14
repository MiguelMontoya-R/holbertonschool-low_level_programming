#include <stdio.h>
/**
  *main - Fizz Buzz
  *
  *Return: always 0
  */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", i);
	}
	printf("\n");

	return (0);
}
