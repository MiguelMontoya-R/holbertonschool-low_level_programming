#include <stdio.h>
#include <stdlib.h>
/**
 *main - program tells the name of itself
 *
 *@argc: argument counter
 *@argv: string (pointer, array)
 *Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (EXIT_SUCCESS);
}
