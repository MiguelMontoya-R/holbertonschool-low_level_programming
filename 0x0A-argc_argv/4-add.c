#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds numbers
 *
 *@argc: counter
 *@argv: array
 *Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	int j;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");

					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
