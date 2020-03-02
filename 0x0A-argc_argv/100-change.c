#include <stdio.h>
#include <stdlib.h>
/**
 *main - give the change
 *
 *@argc: counter
 *argv: vector
 *Return: 0 if is negative
 */
int main(int argc, char *argv[])
{
	int n;
	int change = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc == 2)
	{
		n = atoi(argv[1]);

		while (n > 0)
		{
			if (n >= 25)
			{
				n -= 25;
			}
			else if (n >= 10)
			{
				n -= 10;
			}
			else if (n >= 5)
			{
				n -= 5;
			}
			else if (n >= 2)
			{
				n -= 2;
			}
			else if (n >= 1)
			{
				n -= 1;
			}
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
