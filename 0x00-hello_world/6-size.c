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

	printf("Size of a char: %lu byte(s)\n", sizeof(charv));
	printf("Size of an int: %lu byte(s)\n", sizeof(intv));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longv));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(doublev));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatv));

	return (0);
}
