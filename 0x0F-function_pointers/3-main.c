#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: argument counter
 * @argv: argument vector or pointer array
 * Return: 0 or Error
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		exit(99);
	}
	r = calc(a, b);
	printf("%d\n", r);

	return (0);
}
