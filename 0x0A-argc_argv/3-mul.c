#include <stdio.h>
#include <stdlib.h>
/**
 *main - print multiplication between two number
 *
 *@argc: counter array
 *@argv: array
 *Return: 0 is successful, 0 is not
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc - 1 < 2 || argc - 1 > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
		return (0);
	}
}
