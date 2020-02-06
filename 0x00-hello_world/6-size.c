#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int intv;
	float floatv;
	double doublev;
	char charv;
	long longv;

	printf("Size of int: %lu bytes\n", sizeof(intv));
	printf("Size of float: %lu bytes\n", sizeof(floatv));
	printf("Size of double: %lu bytes\n", sizeof(doublev));
	printf("Size of char: %lu bytes\n", sizeof(charv));
	printf("Size of long: %lu bytes\n", sizeof(longv));

	return (0);
}
