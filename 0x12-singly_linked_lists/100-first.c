#include <stdio.h>
/**
 * before - prints beofre main
 * @construct - attribute to print before main
 * Return: void
 */
void before(void) __attribute__ ((constructor));

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
