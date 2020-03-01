#include <stdlib.h>
#include <stdio.h>
/**
 *main - count arguments at the shell
 *
 *@argc: counter argument
 *@argv: vector argument (array)
 *Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (EXIT_SUCCESS);
}
