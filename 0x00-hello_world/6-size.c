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

	printf("Size of int: %ld bytes\n", sizeof(intv));
	printf("Size of float: %ld bytes\n", sizeof(floatv));
	printf("Size of double: %ld bytes\n", sizeof(doublev));
	printf("Size of char: %ld bytes\n", sizeof(charv));
	printf("Size of long: %ld bytes\n", sizeof(longv));

	return (0);
}
