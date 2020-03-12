#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int a, b, r;

	int(*calc)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
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
